#version 330 core

in vec3 normal;
in vec2 uv;

layout (location = 0) out vec4 color;

uniform sampler2D tex;
uniform bool wireframe;
uniform bool useTexture;

void main()
{
//    color = vec4(uv, 0.2, 1.0);
    if (!wireframe)
    {
        if (useTexture)
            color = texture(tex, uv);
        else
            color = vec4(0.6, 0.6, 0.6, 1.0);
    }
    else
    {
        color = vec4(0.22, 0.55, 0.54, 1.0);
    }
}