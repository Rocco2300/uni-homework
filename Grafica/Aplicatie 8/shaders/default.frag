#version 330 core

in vec3 fragPos;
in vec3 fragNormal;

uniform vec3 lightPos;
uniform vec3 cameraPos;

out vec4 color;

void main()
{
    vec3 lightColor = vec3(1.0, 1.0, 1.0);
    vec3 objColor   = vec3(191.0 / 255.0, 148.0 / 255.0, 228.0 / 255.0);

    float ambStr = 0.1;
    vec3  ambient = lightColor * ambStr;

    vec3 norm = normalize(fragNormal);
    vec3 lightDir = normalize(lightPos - fragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = lightColor * diff;

    float specStr = 0.5;
    vec3 viewDir = normalize(cameraPos - fragPos);
    vec3 reflectDir = reflect(-lightDir, norm);

    float spec = pow(max(dot(viewDir, reflectDir), 0.0), 32.0);
    vec3 specular = specStr * spec * lightColor;

    vec3 result = objColor * (ambient + diffuse + specular);
    color = vec4(result, 1.0);
}