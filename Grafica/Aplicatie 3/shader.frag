#version 330 core

in vec4 colorOut;
layout (location = 0) out vec4 color;

void main()
{
    color = colorOut;
}