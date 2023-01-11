#pragma once

#include <string>
#include <fstream>
#include <sstream>

#include "data_types.h"

object loadObject(const std::string& filePath)
{
    object obj;
    std::string line;
    std::ifstream in(filePath);

    int normals = 0;
    int coordinates = 0;
    while (std::getline(in, line))
    {
        if (line.size() == 0)
            continue;

        std::stringstream ss;
        ss << line;

        std::string header;
        ss >> header;

        if (header == "v")
        {
            vertex vert{};
            ss >> vert.x >> vert.y >> vert.z >> vert.r >> vert.g >> vert.b;

            obj.vertices.push_back(vert);
        }
        else if (header == "vn")
        {
            auto& vert = obj.vertices[normals];
            ss >> vert.nx >> vert.ny >> vert.nz;

            normals++;
        }
        else if (header == "vt")
        {
            auto& vert = obj.vertices[coordinates];
            ss >> vert.u >> vert.v;

            coordinates++;
        }
        else if (header == "f")
        {
            triangle face;
            ss >> face.v1 >> face.v2 >> face.v3;

            obj.tris.push_back(face);
        }
    }

    return obj;
}