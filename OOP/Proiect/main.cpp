#include <iostream>
#include <string>
#include <functional>
#include <unordered_map>

#include "HashTable.h"

int main()
{
    std::unordered_map<int, int> a;
    HashTable<std::string, int> table;

    table["free"] = 3;
    table["ficat"] = 2;
    std::cout << table.at("free") << std::endl;
    std::cout << table.at("ficat") << std::endl;

    table["free"] = 12;
    std::cout << table["free"] << std::endl;

    std::cout << table.contains("free") << std::endl;
    std::cout << table.contains("ficat") << std::endl;
    std::cout << table.contains("omenomatopee") << std::endl;

    return 0;
}