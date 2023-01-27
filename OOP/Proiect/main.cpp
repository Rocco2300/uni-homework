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

    for (const auto& [key, value] : table)
    {
        std::cout << key << ' ' << value << '\n';
    }

//    table.clear();
//    table.insert({"mere", 2});
//    table.insert({"banane", 3});
//    for (auto it = table.begin(); it != table.end(); it++)
//    {
//        std::cout << it->first << ' ' << it->second << '\n';
//    }

    return 0;
}