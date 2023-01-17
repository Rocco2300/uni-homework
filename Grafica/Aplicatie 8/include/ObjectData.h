#pragma once

#include <vector>

std::vector<float> cubeVertices =
{
    // position         // normal
    // front
    -0.5f, -0.5f, 0.5f, 0.f, 0.f, 1.f,
    0.5f, -0.5f, 0.5f, 0.f, 0.f, 1.f,
    0.5f, 0.5f, 0.5f, 0.f, 0.f, 1.f,
    -0.5f, 0.5f, 0.5f, 0.f, 0.f, 1.f,

    // right
    0.5f, -0.5f, 0.5f, 1.f, 0.f, 0.f,
    0.5f, -0.5f, -0.5f, 1.f, 0.f, 0.f,
    0.5f, 0.5f, -0.5f, 1.f, 0.f, 0.f,
    0.5f, 0.5f, 0.5f, 1.f, 0.f, 0.f,

    // back
    0.5f, -0.5f, -0.5f, 0.f, 0.f, -1.f,
    0.5f, 0.5f, -0.5f, 0.f, 0.f, -1.f,
    -0.5f, 0.5f, -0.5f, 0.f, 0.f, -1.f,
    -0.5f, -0.5f, -0.5f, 0.f, 0.f, -1.f,

    // left
    -0.5f, -0.5f, -0.5f, -1.f, 0.f, 0.f,
    -0.5f, 0.5f, -0.5f, -1.f, 0.f, 0.f,
    -0.5f, 0.5f, 0.5f, -1.f, 0.f, 0.f,
    -0.5f, -0.5f, 0.5f, -1.f, 0.f, 0.f,

    // top
    -0.5f, 0.5f, 0.5f, 0.f, 1.f, 0.f,
    0.5f, 0.5f, 0.5f, 0.f, 1.f, 0.f,
    0.5f, 0.5f, -0.5f, 0.f, 1.f, 0.f,
    -0.5f, 0.5f, -0.5f, 0.f, 1.f, 0.f,

    // bottom
    -0.5f, -0.5f, 0.5f, 0.f, -1.f, 0.f,
    0.5f, -0.5f, 0.5f, 0.f, -1.f, 0.f,
    0.5f, -0.5f, -0.5f, 0.f, -1.f, 0.f,
    -0.5f, -0.5f, -0.5f, 0.f, -1.f, 0.f,
};

std::vector<unsigned int> cubeIndices =
{
    1, 2, 0,
    2, 3, 0,

    5, 6, 4,
    6, 7, 4,

    9, 10, 8,
    10, 11, 8,

    13, 14, 12,
    14, 15, 12,

    17, 18, 16,
    18, 19, 16,

    21, 22, 20,
    22, 23, 20
};

std::vector<float> planeVertices =
{
    -50.f, -0.5f, 50.f, 0.f, 1.f, 0.f,
    50.f, -0.5f, 50.f, 0.f, 1.f, 0.f,
    50.f, -0.5f, -50.f, 0.f, 1.f, 0.f,
    -50.f, -0.5f, -50.f, 0.f, 1.f, 0.f,
};

std::vector<unsigned int> planeIndices =
{
    1, 2, 0,
    2, 3, 0
};