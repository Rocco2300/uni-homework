#version 330 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec3 aColor;

uniform mat4 u_MVP;

out vec3 bColor;

void main()
{
    gl_Position = u_MVP * position;
    bColor = aColor;
}