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

void bindObjectData(object& obj)
{
    glGenBuffers(1, &obj.vbo);
    glBindBuffer(GL_ARRAY_BUFFER, obj.vbo);
    glBufferData(GL_ARRAY_BUFFER, obj.vertices.size() * sizeof(vertex), &obj.vertices[0], GL_STATIC_DRAW);

    glGenVertexArrays(1, &obj.vao);
    glBindVertexArray(obj.vao);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(vertex), 0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(vertex), (const void*)offsetof(vertex, texCoord));
    glEnableVertexAttribArray(2);
    glVertexAttribPointer(2, 3, GL_FLOAT, GL_FALSE, sizeof(vertex), (const void*)offsetof(vertex, normal));

    glGenBuffers(1, &obj.ebo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, obj.ebo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, obj.tris.size() * sizeof(triangle), &obj.tris[0], GL_STATIC_DRAW);

    glBindVertexArray(0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}

void bindBuffers(object& obj)
{
    glBindVertexArray(obj.vao);
//    glBindBuffer(GL_ARRAY_BUFFER, obj.vbo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, obj.ebo);
}

void unbindBuffers(object& obj)
{
    glBindVertexArray(0);
//    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}