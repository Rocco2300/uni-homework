#include <iostream>
#include <string>

#include "HashTable.h"

int main()
{
    HashTable<std::string, int> fructe;

    // inserare
    fructe.insert({"mere", 2});
    fructe.insert({"prune", 12});
    fructe.insert({"banane", 3});
    fructe.insert({"capsuni", 70});
    fructe.insert({"cirese", 2 * 40});

    // iterare for-each c++ 17 cu
    // structured bindings
    for (const auto& [fruct, cantitate] : fructe)
    {
        std::cout << fruct << ' ' << cantitate << '\n';
    }

    std::cout << '\n';
    std::cout << "Empty: " << ((fructe.empty()) ? "yes" : "no") << '\n';
    std::cout << "Size: " << fructe.size() << '\n';
    std::cout << "Capacity: " << fructe.capacity() << '\n';

    return 0;
}