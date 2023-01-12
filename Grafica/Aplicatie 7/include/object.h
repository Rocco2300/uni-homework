#pragma once

#include <string>
#include <numeric>
#include <fstream>
#include <sstream>

#include "data_types.h"

struct object_data
{
    std::vector<coord> coords;
    std::vector<normal> normals;
    std::vector<tex_coord> texCoords;
    std::vector<face> faces;
};

object_data loadObjectData(const std::string& filePath)
{
    object_data objData;
    std::ifstream in(filePath);

    std::string line;
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
            coord c{};
            ss >> c.x >> c.y >> c.z;

            objData.coords.push_back(c);
        }
        else if (header == "vn")
        {
            normal n{};
            ss >> n.x >> n.y >> n.z;

            objData.normals.push_back(n);
        }
        else if (header == "vt")
        {
            tex_coord tc{};
            ss >> tc.u >> tc.v;

            objData.texCoords.push_back(tc);
        }
        else if (header == "f")
        {
            face f;
            std::string elem;

            while (ss >> elem)
            {
                char dummy;
                int cIdx, tIdx, nIdx;
                std::stringstream vertData;

                vertData << elem;
                vertData >> cIdx >> dummy >> tIdx >> dummy >> nIdx;

                f.coordIdx.push_back(cIdx);
                f.texCoordIdx.push_back(tIdx);
                f.normalIdx.push_back(nIdx);
            }

            objData.faces.push_back(f);
        }
    }

    return objData;
}

object loadObject(const std::string& filePath)
{
    object obj;
    object_data objData = loadObjectData(filePath);

    int startingIdx = 0;
    for (const auto& face : objData.faces)
    {
        int tris = face.coordIdx.size() - 2;
        std::vector<int> indices(face.coordIdx.size());
        std::iota(indices.begin(), indices.end(), startingIdx);
        for (int i = 1; i <= tris; i++)
        {
            triangle tri{};
            tri.v1 = indices.at(i);
            tri.v2 = indices.at(i + 1);
            tri.v3 = indices.at(0);
            obj.tris.push_back(tri);
        }
        startingIdx += face.coordIdx.size();

        for (int i = 0; i < face.coordIdx.size(); i++)
        {
            vertex vert{};

            vert.coord = objData.coords.at(face.coordIdx[i] - 1);
            vert.texCoord = objData.texCoords.at(face.texCoordIdx[i] - 1);
            vert.normal = objData.normals.at(face.normalIdx[i] - 1);

            obj.vertices.push_back(vert);
        }
    }

    return obj;
}