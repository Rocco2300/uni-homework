#include <iostream>
#include <string>
#include <functional>
#include <unordered_map>

#include "HashTable.h"

int main()
{
    HashTable<std::string, int> table;

    table["free"] = 3;
    table["ficat"] = 2;
    table["muie"] = 10;
    table["simaimultamuie"] = 20;

    std::cout << table.at("free") << std::endl;
    std::cout << table.at("ficat") << std::endl;

//    table["free"] = 12;
//    std::cout << table["free"] << std::endl;

//    std::cout << table.contains("free") << std::endl;
//    std::cout << table.contains("ficat") << std::endl;
//    std::cout << table.contains("omenomatopee") << std::endl;

    for (const auto& p : table)
    {
        std::cout << p.first << ' ' << p.second << '\n';
    }


    return 0;
}