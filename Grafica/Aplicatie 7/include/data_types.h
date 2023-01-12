#pragma once

#include <vector>

struct coord
{
    float x, y, z;
};

struct normal
{
    float x, y, z;
};

struct tex_coord
{
    float u, v;
};

struct vertex
{
    coord coord;
    tex_coord texCoord;
    normal normal;
};

struct face
{
    std::vector<int> coordIdx;
    std::vector<int> texCoordIdx;
    std::vector<int> normalIdx;
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