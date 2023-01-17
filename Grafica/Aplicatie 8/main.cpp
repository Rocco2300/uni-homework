#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include <GL/glew.h>
#include <GL/freeglut.h>

#include <glm/glm.hpp>
#include <glm/matrix.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Object.h"
#include "ObjectData.h"

Object cube, plane;

unsigned int lightPosLoc;
unsigned int shadowMap, shadowMapFBO;

glm::vec3 lightPos, cameraPos;

static std::string readShader(const std::string& filePath)
{
    std::ifstream in(filePath);
    std::stringstream ss;

    if (!in)
    {
        std::cerr << "Could not open " << filePath << '\n';
    }

    ss << in.rdbuf();
    in.close();

    return ss.str();
}

static unsigned int compileShader(unsigned int type, const std::string& source)
{
    unsigned int id = glCreateShader(type);
    const char* src = source.c_str();
    glShaderSource(id, 1, &src, nullptr);
    glCompileShader(id);

    int result;
    glGetShaderiv(id, GL_COMPILE_STATUS, &result);
    if (result == GL_FALSE)
    {
        int length;
        glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);

        char* message = (char*)alloca(length * sizeof(char));
        glGetShaderInfoLog(id, length, &length, message);

        std::cout << "Failed to compile " << (type == GL_VERTEX_SHADER ? "vertex" : "fragment") << "shader\n";
        std::cout << message << '\n';

        glDeleteShader(id);
        return 0;
    }

    return id;
}

static unsigned int createShader(const std::string& vertexShader, const std::string& fragmentShader)
{
    unsigned int program = glCreateProgram();
    unsigned int vs = compileShader(GL_VERTEX_SHADER, vertexShader);
    unsigned int fs = compileShader(GL_FRAGMENT_SHADER, fragmentShader);

    glAttachShader(program, vs);
    glAttachShader(program, fs);
    glLinkProgram(program);
    glValidateProgram(program);

    glDeleteShader(vs);
    glDeleteShader(fs);

    return program;
}

void handleKeyDown(unsigned char key, int x, int y)
{
    if (key == 'a' || key == 'A')
    {
        float angle = 0.1f;

        glm::mat4 rotMatrix = glm::mat4(1.f);
        rotMatrix = glm::rotate(rotMatrix, angle, glm::vec3(0.f, 1.f, 0.f));
        lightPos  = glm::vec3(rotMatrix * glm::vec4(lightPos, 1.f));
    }
    if (key == 'd' || key == 'D')
    {
        float angle = -0.1f;

        glm::mat4 rotMatrix = glm::mat4(1.f);
        rotMatrix = glm::rotate(rotMatrix, angle, glm::vec3(0.f, 1.f, 0.f));
        lightPos  = glm::vec3(rotMatrix * glm::vec4(lightPos, 1.f));
    }
}

void render()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glUniform3fv(lightPosLoc, 1, glm::value_ptr(lightPos));

    bind(cube);
    glDrawElements(GL_TRIANGLES, cube.indices->size(), GL_UNSIGNED_INT, nullptr);
    unbind(cube);

    bind(plane);
    glDrawElements(GL_TRIANGLES, plane.indices->size(), GL_UNSIGNED_INT, nullptr);
    unbind(plane);

    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(800, 800);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("Aplicatie 8");

    auto err = glewInit();
    if (err != GLEW_OK)
    {
        std::cerr << "Error " << glewGetErrorString(err) << '\n';
        return 1;
    }

    glEnable(GL_DEPTH_TEST);

    setObjectData(cube, cubeVertices, cubeIndices);
    setObjectData(plane, planeVertices, planeIndices);

    setBufferData(cube);
    setBufferData(plane);

    auto vertexShader = readShader("../shaders/default.vert");
    auto fragmentShader = readShader("../shaders/default.frag");

    auto shader = createShader(vertexShader, fragmentShader);
    glUseProgram(shader);

    glm::mat4 projection = glm::perspective(45.f, (float)800 / 800, 1.f, 100.f);
    glm::mat4 view = glm::lookAt(
            glm::vec3(-1.f, 1.f, 3.f),
            glm::vec3(0.f, 0.f, 0.f),
            glm::vec3(0.f, 1.f, 0.f)
    );
    glm::mat4 model = glm::mat4(1.f);

    auto viewMatLoc = glGetUniformLocation(shader, "view");
    auto modelMatLoc = glGetUniformLocation(shader, "model");
    auto projMatLoc = glGetUniformLocation(shader, "projection");

    glUniformMatrix4fv(viewMatLoc, 1, GL_FALSE, glm::value_ptr(view));
    glUniformMatrix4fv(modelMatLoc, 1, GL_FALSE, glm::value_ptr(model));
    glUniformMatrix4fv(projMatLoc, 1, GL_FALSE, glm::value_ptr(projection));

    lightPos = glm::vec3(0.f, 1.f, -3.f);
    cameraPos = glm::vec3(-1.f, 1.f, 3.f);

    lightPosLoc = glGetUniformLocation(shader, "lightPos");
    auto cameraPosLoc = glGetUniformLocation(shader, "cameraPos");

    glUniform3fv(lightPosLoc, 1, glm::value_ptr(lightPos));
    glUniform3fv(cameraPosLoc, 1, glm::value_ptr(cameraPos));

    glutDisplayFunc(render);
    glutIdleFunc(render);
    glutKeyboardFunc(handleKeyDown);

    glutMainLoop();

    return 0;
}