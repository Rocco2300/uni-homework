#include <vector>

#include "shader.h"
#include "object.h"

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtx/quaternion.hpp"
#include "glm/gtc/quaternion.hpp"
#include "glm/gtx/rotate_vector.hpp"
#include "glm/gtc/type_ptr.hpp"

unsigned int shader;

float angleX, angleY;

glm::mat4 projection, view, model, mvp;

glm::vec3 xAxis = glm::vec3(1.f, 0.f, 0.f);
glm::vec3 yAxis = glm::vec3(0.f, 1.f, 0.f);

void initMatrices()
{
    projection = glm::perspective(45.0f, 1.f / 1.f, 0.1f, 100.f);

    view = glm::lookAt(
        glm::vec3(0,0,3),
        glm::vec3(0,0,0),
        glm::vec3(0,1,0)
    );

    model = glm::mat4(1.0f);

    mvp = projection * view * model;
}

void render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    mvp = projection * view * model;

    int matrixLocation = glGetUniformLocation(shader, "u_MVP");
    glUniformMatrix4fv(matrixLocation, 1, GL_FALSE, glm::value_ptr(mvp));

    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, nullptr);

    glutSwapBuffers();
}

void handleKeyPress(unsigned char key, int x, int y)
{
    if (key == 'a')
    {
        angleY = -0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleY, yAxis);

        xAxis = glm::rotate(xAxis, -angleY, yAxis);

        model *= rot;
    }
    if (key == 'd')
    {
        angleY = 0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleY, yAxis);

        xAxis = glm::rotate(xAxis, -angleY, yAxis);

        model *= rot;
    }
    if (key == 'w')
    {
        angleX = -0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleX, xAxis);

        yAxis = glm::rotate(yAxis, -angleX, xAxis);

        model *= rot;
    }
    if (key == 's')
    {
        angleX = 0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleX, xAxis);

        yAxis = glm::rotate(yAxis, -angleX, xAxis);

        model *= rot;
    }
}

void handleKeyRelease(unsigned char key, int x, int y)
{
    if (key == 'a')
    {
        angleY = 0.f;
    }
    if (key == 'd')
    {
        angleY = 0.f;
    }
    if (key == 'w')
    {
        angleX = 0.f;
    }
    if (key == 's')
    {
        angleX = 0.f;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 200);
    glutInitWindowSize(400, 400);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("Aplicatie 5");

    initMatrices();
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    unsigned int err = glewInit();
    if (err != GLEW_OK)
    {
        std::cerr << "Error " << glewGetErrorString(err) << '\n';
        return 1;
    }

    object cube = loadObject("../cube.txt");

    unsigned int vbo;
    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, cube.vertices.size() * sizeof(vertex), &cube.vertices[0], GL_STATIC_DRAW);

    unsigned int vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), 0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (const void*)(3 * sizeof(float)));

    unsigned int ibo;
    glGenBuffers(1, &ibo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, cube.tris.size() * sizeof(triangle), &cube.tris[0], GL_STATIC_DRAW);

    std::string vertexShader = readShader("../shader.vert");
    std::string fragmentShader = readShader("../shader.frag");

    shader = createShader(vertexShader, fragmentShader);
    glUseProgram(shader);

    std::cout << "W - rotate up\n";
    std::cout << "A - rotate left\n";
    std::cout << "S - rotate down\n";
    std::cout << "D - rotate right\n";

    glutKeyboardFunc(handleKeyPress);
    glutKeyboardUpFunc(handleKeyRelease);
    glutDisplayFunc(render);
    glutIdleFunc(render);

    glutMainLoop();
    return 0;
}