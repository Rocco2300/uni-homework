#version 330 core

in vec3 bColor;
in vec3 normal;
in vec2 uv;

layout (location = 0) out vec4 color;

uniform sampler2D tex;

void main()
{
    color = texture(tex, uv);
}