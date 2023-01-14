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

const unsigned int WIDTH  = 800;
const unsigned int HEIGHT = 800;

bool keys[256];
bool wireframe;
bool toggleWireframe;

unsigned int shader, texture;

float angleX, angleY;

object cube, plane;

glm::mat4 projection, view, model, model2, mvp;

glm::vec2 mousePos;
glm::vec2 mouseDelta;

glm::vec3 camUp      = glm::vec3(0.f, 1.f, 0.f);
glm::vec3 camRight   = glm::vec3(1.f, 0.f, 0.f);
glm::vec3 camForward = glm::vec3(0.f, 0.f, -1.f);

glm::vec3 camPos = glm::vec3(0.f, 0.f, 3.f);

bool rotated;

void initMatrices()
{
    projection = glm::perspective(45.0f, 1.f / 1.f, 0.1f, 100.f);

    view = glm::lookAt(camPos, camPos + camForward, camUp);

    model = glm::mat4(1.0f);
    model2 = glm::mat4(1.f);
    model2 *= glm::translate(model, glm::vec3(0.f, -1.f, 0.f));

    mvp = projection * view * model;
}

void handleKeyPress();
void handleMouseMove();
void handleKeyRelease();

void render()
{
    handleKeyPress();
    handleMouseMove();
    handleKeyRelease();

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    view = glm::lookAt(camPos, camPos + camForward, camUp);
    mvp = projection * view * model;

    int matrixLocation = glGetUniformLocation(shader, "u_MVP");
    int useTextureLocation = glGetUniformLocation(shader, "useTexture");

    glUniform1i(useTextureLocation, true);
    glUniformMatrix4fv(matrixLocation, 1, GL_FALSE, glm::value_ptr(mvp));
    bindBuffers(cube);
    glDrawElements(GL_TRIANGLES, cube.tris.size() * 3, GL_UNSIGNED_INT, nullptr);
    unbindBuffers(cube);

    mvp = projection * view * model2;
    glUniform1i(useTextureLocation, false);
    glUniformMatrix4fv(matrixLocation, 1, GL_FALSE, glm::value_ptr(mvp));
    bindBuffers(plane);
    glDrawElements(GL_TRIANGLES, plane.tris.size() * 3, GL_UNSIGNED_INT, nullptr);
    unbindBuffers(plane);

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

void handleMouseMove()
{

}

void handleKeyPress()
{
    const float speed = 0.3f;

    if (keys['s'])
    {
        glm::mat4 translate  = glm::translate(glm::mat4(1.f), -camForward * speed);
        glm::vec4 tempCamPos = glm::vec4(camPos, 1.f);

        tempCamPos = translate * tempCamPos;
        camPos = tempCamPos;
    }
    if (keys['w'])
    {
        glm::mat4 translate  = glm::translate(glm::mat4(1.f), camForward * speed);
        glm::vec4 tempCamPos = glm::vec4(camPos, 1.f);

        tempCamPos = translate * tempCamPos;
        camPos = tempCamPos;
    }
    if (keys['a'])
    {
        glm::mat4 translate  = glm::translate(glm::mat4(1.f), -camRight * speed);
        glm::vec4 tempCamPos = glm::vec4(camPos, 1.f);

        tempCamPos = translate * tempCamPos;
        camPos = tempCamPos;
    }
    if (keys['d'])
    {
        glm::mat4 translate  = glm::translate(glm::mat4(1.f), camRight * speed);
        glm::vec4 tempCamPos = glm::vec4(camPos, 1.f);

        tempCamPos = translate * tempCamPos;
        camPos = tempCamPos;
    }
    if (keys['t'])
    {
        if (toggleWireframe)
            return;

        wireframe = !wireframe;

        if (wireframe)
            glDisable(GL_CULL_FACE);
        else
            glEnable(GL_CULL_FACE);

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
    if (!keys['t'])
    {
        toggleWireframe = false;
    }
}

void clamp(float& angle, float min, float max)
{
    if (angle < min)
        angle = min;
    else if (angle > max)
        angle = max;
}

void handleMouseMove(int x, int y)
{
    mousePos = glm::vec2(x, y);
    mouseDelta = (mousePos - glm::vec2(WIDTH / 2, HEIGHT / 2));

    glm::vec4 tempCamForward, tempCamRight;

    float sensitivity = 0.004f;

    angleX += -mouseDelta.y * sensitivity;
    angleY += -mouseDelta.x * sensitivity;

    clamp(angleX, -0.7, 0.7);

    glm::mat4 rotY = glm::mat4(1.f);
    rotY = glm::rotate(rotY, angleY, camUp);

    tempCamRight = glm::vec4(1.f, 0.f, 0.f, 1.f);
    tempCamRight = rotY * tempCamRight;
    camRight = tempCamRight;
    tempCamForward = glm::vec4(0.f, 0.f, -1.f, 1.f);
    tempCamForward = rotY * tempCamForward;

    glm::mat4 rotX = glm::mat4(1.f);
    rotX = glm::rotate(rotX, angleX, camRight);

    tempCamForward = rotX * tempCamForward;
    camForward = tempCamForward;

    mouseDelta = glm::vec3(0.f);

    glutWarpPointer(WIDTH / 2, HEIGHT / 2);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 200);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutCreateWindow("Aplicatie 5");

    initMatrices();
    glutSetCursor(GLUT_CURSOR_NONE);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    unsigned int err = glewInit();
    if (err != GLEW_OK)
    {
        std::cerr << "Error " << glewGetErrorString(err) << '\n';
        return 1;
    }

    cube  = loadObject("../objects/cube.obj");
    plane = loadObject("../objects/plane.obj");

    bindObjectData(cube);
    bindObjectData(plane);

    std::string vertexShader = readShader("../shaders/shader.vert");
    std::string fragmentShader = readShader("../shaders/shader.frag");

    shader = createShader(vertexShader, fragmentShader);
    glUseProgram(shader);

    int width, height, channelNo;
    stbi_set_flip_vertically_on_load(true);
    unsigned char* data = stbi_load("../textures/warped_planks.png", &width, &height, &channelNo, 0);

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
    stbi_image_free(data);

    int texUniform = glGetUniformLocation(shader, "tex");
    glUniform1i(texUniform, 0);

    std::cout << "  W A S D to move\n";
    std::cout << "  Mouse to rotate\n";
    std::cout << "  T - toggle wireframe\n";

    glutIgnoreKeyRepeat(true);
    glutKeyboardFunc(registerKeyDown);
    glutKeyboardUpFunc(registerKeyUp);

    glutDisplayFunc(render);
    glutIdleFunc(render);
    glutPassiveMotionFunc(handleMouseMove);

    glutMainLoop();
    return 0;
}