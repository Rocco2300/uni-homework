#include <string>
#include <iostream>

#include "HashTable.h"

int main()
{
    HashTable<std::string, int> fructe;

    // inserare
    fructe.insert({"mere", 2});
    fructe.insert({"prune", 12});
    fructe.insert({"banane", 3});

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

    fructe.clear();

    std::cout << '\n';
    std::cout << "Empty: " << ((fructe.empty()) ? "yes" : "no") << '\n';
    std::cout << "Size: " << fructe.size() << '\n';
    std::cout << "Capacity: " << fructe.capacity() << '\n';

    // inserare []
    fructe["mere"] = 20;
    fructe["prune"] = 12;
    fructe["struguri"] = 2;
    fructe["banane"] = 5;
    fructe["kiwi"] = 7;
    fructe["ananas"] = 1;
    fructe["mango"] = 1000;
    // modificare []
    fructe["mango"] = 3;

    // iterare clasica
    std::cout << '\n';
    for (auto it = fructe.begin(); it != fructe.end(); it++)
    {
        const auto& [fruct, cantitate] = *it;
        std::cout << fruct << ' ' << cantitate << '\n';
    }

    std::cout << '\n';
    std::cout << "Empty: " << ((fructe.empty()) ? "yes" : "no") << '\n';
    std::cout << "Size: " << fructe.size() << '\n';
    std::cout << "Capacity: " << fructe.capacity() << '\n';

    // accesare elemente (returneaza doar valoare)
    std::cout << '\n';
    std::cout << "Mango " << fructe["mango"] << '\n';
    std::cout << "Ananas " << fructe.at("ananas") << '\n';

    // verificare existenta ( dupa cheie )
    std::cout << '\n';
    bool contains;
    contains = fructe.contains("ananas");
    std::cout << "Contains ananas: " << ((contains) ? "yes" : "no") << '\n';
    contains = fructe.contains("capsuni");
    std::cout << "Contains capsuni: " << ((contains) ? "yes" : "no") << '\n';


    // gasire prin iterator
    std::cout << '\n';
    auto it = fructe.find("ananas");
    std::cout << "Found ananas: " << ((it != fructe.end()) ? "yes" : "no") << '\n';
    it = fructe.find("capsuni");
    std::cout << "Found capsuni: " << ((it != fructe.end()) ? "yes" : "no") << '\n';

    std::cin.get();

    return 0;
}