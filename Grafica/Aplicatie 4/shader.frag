#version 330 core

in vec2 uv;

layout (location = 0) out vec4 color;

void main()
{
    color = vec4(uv, 0.2, 1.0);
}