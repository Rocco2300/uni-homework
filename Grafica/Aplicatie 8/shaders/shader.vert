#version 330 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec2 aUv;
layout (location = 2) in vec3 aNormal;

uniform mat4 u_MVP;

out vec3 normal;
out vec2 uv;
out vec4 currentPos;

void main()
{
    gl_Position = u_MVP * position;

    uv = aUv;
    normal = aNormal;
    currentPos = position;
}