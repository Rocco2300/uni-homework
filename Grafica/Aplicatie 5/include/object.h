#pragma once

#include <string>
#include <fstream>
#include <sstream>

#include "data_types.h"

object loadObject(const std::string& filePath)
{
    object obj;
    std::ifstream in(filePath);

    std::string line;
    while (std::getline(in, line))
    {
        if (line.size() == 0)
            continue;

        std::stringstream ss;
        ss << line;

        char header;
        ss >> header;
        if (header == '#')
            continue;

        if (header == 'v')
        {
            vertex vert;
            ss >> vert.x >> vert.y >> vert.z >> vert.r >> vert.g >> vert.b;

            obj.vertices.push_back(vert);
        }
        else if (header == 'f')
        {
            triangle face;
            ss >> face.v1 >> face.v2 >> face.v3;

            obj.tris.push_back(face);
        }
    }

    return obj;
}