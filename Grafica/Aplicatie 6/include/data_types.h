#pragma once

#include <vector>

struct vertex
{
    float x, y, z;
    float r, g, b;
    float nx, ny, nz;
    float u, v;
};

struct triangle
{
    unsigned int v1, v2, v3;
};

struct object
{
    std::vector<vertex> vertices;
    std::vector<triangle> tris;
};