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
    Bucket* m_table{};
    size_t m_capacity{};
    size_t m_size{};

    HashFunc hashFunc;

public:
    HashTable() : m_capacity{100}, m_size{0}
    {
        m_table = new Bucket[m_capacity];
    }

    bool empty()
    {
        return (m_size == 0);
    }

    size_t size()
    {
        return m_size;
    }

    size_t capacity()
    {
        return m_capacity;
    }

    Value& operator[](const Key& key)
    {
        auto hash    = hashFunc(key);
        auto index   = hash % m_capacity;
        auto& bucket = m_table[index];

        if (bucket.find(key))
        {
            std::cout << "Modified" << std::endl;
            auto pair = bucket.get(key);
            return pair->second;
        }

        bucket.insert({key, Value()});
        return bucket.get(key)->second;
    }

    void insert(const Pair& pair)
    {
        auto [key, value] = pair;

        auto hash    = hashFunc(key);
        auto index   = hash % m_capacity;
        auto& bucket = m_table[index];

        if (bucket.find(key))
        {
            std::cout << "Modified" << std::endl;
            auto pair = bucket.get(key);
            pair->second = value;
            return;
        }

        bucket.insert({key, value});
        m_size++;
    }

    Value& at(const Key& key)
    {
        auto hash  = hashFunc(key);
        auto index = hash % m_capacity;

        auto pair  = m_table[index].get(key);

        if (!pair)
        {
            std::stringstream errMsg;
            errMsg << "key '" << key << "' doesn't exist";

            throw std::out_of_range(errMsg.str());
        }

        return pair->second;
    }

    const Value& at(const Key& key) const
    {
        auto hash  = hashFunc(key);
        auto index = hash % m_capacity;

        auto pair  = m_table[index].get(key);

        if (!pair)
        {
            std::stringstream errMsg;
            errMsg << "key '" << key << "' doesn't exist";

            throw std::out_of_range(errMsg.str());
        }

        return pair->second;
    }

    void remove(const Key& key)
    {
        auto hash    = hashFunc(key);
        auto index   = hash % m_capacity;
        auto& bucket = m_table[index];

        if (bucket.find(key))
        {
            bucket.remove(key);
            m_size--;
        }
    }

    bool contains(const Key& key)
    {
        for (int i = 0; i < m_capacity; i++)
        {
            auto& bucket = m_table[i];
            if (bucket.find(key))
            {
                return true;
            }
        }

        return false;
    }

    
};