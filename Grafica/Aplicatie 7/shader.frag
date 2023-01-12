#version 330 core

in vec3 normal;
in vec2 uv;

layout (location = 0) out vec4 color;

uniform sampler2D tex;
uniform bool wireframe;

void main()
{
    if (!wireframe)
    {
        color = texture(tex, uv);
    }
    else
    {
        color = vec4(0.22, 0.55, 0.54, 1.0);
    }
}