#include <thread>

#include "shader.h"
#include "object.h"

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"
#include "glm/gtx/quaternion.hpp"
#include "glm/gtc/quaternion.hpp"
#include "glm/gtx/rotate_vector.hpp"
#include "glm/gtc/type_ptr.hpp"

#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

bool keys[256];
bool wireframe;
bool toggleWireframe;

unsigned int shader;

float angleX, angleY, angleZ;

glm::mat4 projection, view, model, mvp;

glm::vec3 xAxis = glm::vec3(1.f, 0.f, 0.f);
glm::vec3 yAxis = glm::vec3(0.f, 1.f, 0.f);
glm::vec3 zAxis = glm::vec3(0.f, 0.f, 1.f);

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

void handleKeyPress();
void handleKeyRelease();

void render()
{
    handleKeyPress();
    handleKeyRelease();

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    mvp = projection * view * model;

    int matrixLocation = glGetUniformLocation(shader, "u_MVP");
    glUniformMatrix4fv(matrixLocation, 1, GL_FALSE, glm::value_ptr(mvp));

    glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_INT, nullptr);

    glutSwapBuffers();

    std::this_thread::sleep_for(std::chrono::milliseconds(16));
}

void registerKeyUp(unsigned char key, int x, int y)
{
    keys[key] = false;
}

void registerKeyDown(unsigned char key, int x, int y)
{
    keys[key] = true;
}

void handleKeyPress()
{
    if (keys['a'])
    {
        angleY = -0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleY, yAxis);

        xAxis = glm::rotate(xAxis, -angleY, yAxis);
        zAxis = glm::rotate(zAxis, -angleY, yAxis);

        model *= rot;
    }
    if (keys['d'])
    {
        angleY = 0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleY, yAxis);

        xAxis = glm::rotate(xAxis, -angleY, yAxis);
        zAxis = glm::rotate(zAxis, -angleY, yAxis);

        model *= rot;
    }
    if (keys['w'])
    {
        angleX = -0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleX, xAxis);

        yAxis = glm::rotate(yAxis, -angleX, xAxis);
        zAxis = glm::rotate(zAxis, -angleX, xAxis);

        model *= rot;
    }
    if (keys['s'])
    {
        angleX = 0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleX, xAxis);

        yAxis = glm::rotate(yAxis, -angleX, xAxis);
        zAxis = glm::rotate(zAxis, -angleX, xAxis);

        model *= rot;
    }
    if (keys['q'])
    {
        angleZ = 0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleZ, zAxis);

        xAxis = glm::rotate(xAxis, -angleZ, zAxis);
        yAxis = glm::rotate(yAxis, -angleZ, zAxis);

        model *= rot;
    }
    if (keys['e'])
    {
        angleZ = -0.1f;

        glm::mat4 rot = glm::mat4(1.f);
        rot = glm::rotate(rot, angleZ, zAxis);

        xAxis = glm::rotate(xAxis, -angleZ, zAxis);
        yAxis = glm::rotate(yAxis, -angleZ, zAxis);

        model *= rot;
    }
    if (keys['t'])
    {
        if (toggleWireframe)
            return;

        wireframe = !wireframe;

        if (wireframe)
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
        else
            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

        int uniformId = glGetUniformLocation(shader, "wireframe");
        glUniform1i(uniformId, wireframe);

        toggleWireframe = true;
    }
}

void handleKeyRelease()
{
    if (!keys['a'])
    {
        angleY = 0.f;
    }
    if (!keys['d'])
    {
        angleY = 0.f;
    }
    if (!keys['w'])
    {
        angleX = 0.f;
    }
    if (!keys['s'])
    {
        angleX = 0.f;
    }
    if (!keys['q'])
    {
        angleZ = 0.f;
    }
    if (!keys['e'])
    {
        angleZ = 0.f;
    }
    if (!keys['t'])
    {
        toggleWireframe = false;
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
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(vertex), 0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(vertex), (const void*)offsetof(vertex, r));
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(vertex), (const void*)offsetof(vertex, nx));
    glEnableVertexAttribArray(3);
    glVertexAttribPointer(3, 2, GL_FLOAT, GL_FALSE, sizeof(vertex), (const void*)offsetof(vertex, u));

    unsigned int ibo;
    glGenBuffers(1, &ibo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, cube.tris.size() * sizeof(triangle), &cube.tris[0], GL_STATIC_DRAW);

    std::string vertexShader = readShader("../shaders/shader.vert");
    std::string fragmentShader = readShader("../shaders/shader.frag");

    shader = createShader(vertexShader, fragmentShader);
    glUseProgram(shader);

    int width, height, channelNo;
    stbi_set_flip_vertically_on_load(true);
    unsigned char* data = stbi_load("../textures/warped_planks.png", &width, &height, &channelNo, 0);

    unsigned int texture;
    glGenTextures(1, &texture);
    glBindTexture(GL_TEXTURE_2D, texture);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST_MIPMAP_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

    if (data)
    {
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(GL_TEXTURE_2D);
    }
    else
    {
        std::cerr << "Error loading image!\n";
    }

    int texUniform = glGetUniformLocation(shader, "tex");
    glUniform1i(texUniform, 0);

    std::cout << "  T - toggle wireframe\n\n";
    std::cout << "  W - rotate up on x-axis\n";
    std::cout << "  A - rotate left on y-axis\n";
    std::cout << "  S - rotate down on x-axis\n";
    std::cout << "  D - rotate right on y-axis\n";
    std::cout << "  Q - rotate left on z-axis\n";
    std::cout << "  E - rotate right on z-axis\n";

    glutIgnoreKeyRepeat(true);
    glutKeyboardFunc(registerKeyDown);
    glutKeyboardUpFunc(registerKeyUp);

    glutDisplayFunc(render);
    glutIdleFunc(render);

    glutMainLoop();

    stbi_image_free(data);
    return 0;
}