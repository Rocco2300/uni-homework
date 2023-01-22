#include <iostream>
#include <string>
#include <functional>
#include <unordered_map>

#include "HashTable.h"

int main()
{
    std::unordered_map<int, int> a;
    HashTable<std::string, int> table;

    table["ficat"] = 2;
    table["free"] = 3;
    std::cout << table.at("ficat") << std::endl;
    std::cout << table.at("free") << std::endl;

    table["free"] = 12;
    std::cout << table["free"] << std::endl;

    return 0;
}