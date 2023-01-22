#pragma once

#include <sstream>
#include <iostream>
#include <stdexcept>

#include "Bucket.h"

template <typename Key>
class BasicHash
{
public:
    BasicHash() = default;

    size_t operator ()(Key key)
    {
        std::stringstream ss;
        ss << key;

        std::string str = ss.str();
        unsigned long long res = 0;
        for (int i = 0; i < str.size(); i++)
        {
            res += str[i] * (i + 1);
        }
        return res;
    }
};

template <typename Key, typename Value, typename HashFunc = BasicHash<Key>>
class HashTable
{
private:
    using Pair   = Pair<Key, Value>;
    using Bucket = Bucket<Key, Value>;

private:
    Bucket* table{};
    size_t capacity{};
    size_t size{};

    HashFunc hashFunc;

public:
    HashTable() : capacity{100}, size{0}
    {
        table = new Bucket[capacity];
    }

    void insert(Pair pair)
    {
        auto [key, value] = pair;

        auto hash    = hashFunc(key);
        auto index   = hash % capacity;
        auto& bucket = table[index];

        if (bucket.find(key))
        {
            std::cout << "Modified" << std::endl;
            auto pair = bucket.get(key);
            pair->second = value;
            return;
        }

        bucket.insert({key, value});
    }

    Value& at(Key key)
    {
        auto hash  = hashFunc(key);
        auto index = hash % capacity;

        auto pair  = table[index].get(key);

        if (!pair)
        {
            std::stringstream errMsg;
            errMsg << "key '" << key << "' doesn't exist";

            throw std::out_of_range(errMsg.str());
        }

        return pair->second;
    }

    const Value& at(Key key) const
    {
        auto hash  = hashFunc(key);
        auto index = hash % capacity;

        auto pair  = table[index].get(key);

        if (!pair)
        {
            std::stringstream errMsg;
            errMsg << "key '" << key << "' doesn't exist";

            throw std::out_of_range(errMsg.str());
        }

        return pair->second;
    }

    void remove(Key key)
    {
        auto hash    = hashFunc(key);
        auto index   = hash % capacity;
        auto& bucket = table[index];

        if (bucket.find(key))
        {
            bucket.remove(key);
        }
    }
};