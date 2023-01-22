
#include <iostream>
#include <string>
#include <functional>
#include <unordered_map>

#include "HashTable.h"

int main()
{
    HashTable<std::string, int> table;

    table.insert({"ficat", 2});
    table.insert({"free", 3});
    std::cout << table.at("ficat") << std::endl;
    std::cout << table.at("free") << std::endl;

    table.insert({"free", 12});
    std::cout << table.at("free") << std::endl;

    table.insert({"free", 10});
    std::cout << table.at("free") << std::endl;

    return 0;
}