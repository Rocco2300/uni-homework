#pragma once

#include <vector>

#include <GL/glew.h>
#include <GL/freeglut.h>

struct Object
{
    std::vector<float>* vertices;
    std::vector<unsigned int>* indices;

    unsigned int vbo, vao, ebo;
};

void setObjectData(Object& obj, std::vector<float>& vertices, std::vector<unsigned int>& indices)
{
    obj.vertices = &vertices;
    obj.indices  = &indices;
}

void setBufferData(Object& obj)
{
    glGenBuffers(1, &obj.vbo);
    glBindBuffer(GL_ARRAY_BUFFER, obj.vbo);
    glBufferData(GL_ARRAY_BUFFER, obj.vertices->size() * sizeof(float), &obj.vertices->at(0), GL_STATIC_DRAW);

    glGenVertexArrays(1, &obj.vao);
    glBindVertexArray(obj.vao);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), 0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (const void*)(3 * sizeof(float)));

    glGenBuffers(1, &obj.ebo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, obj.ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, obj.indices->size() * sizeof(unsigned int), &obj.indices->at(0), GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}

void bind(Object& obj)
{
    glBindVertexArray(obj.vao);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, obj.ebo);
}

void unbind(Object& obj)
{
    glBindVertexArray(0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}