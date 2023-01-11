#version 330 core

in vec3 bColor;

layout (location = 0) out vec4 color;

void main()
{
    color = vec4(bColor, 1.0);
}