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

public:
    class HashTableIterator;
    using Iterator = HashTableIterator;

private:
    Bucket* m_table{};
    size_t m_capacity{};
    size_t m_size{};

    HashFunc hashFunc;

public:
    HashTable() : m_capacity{2}, m_size{0}
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
        auto& bucket = getBucket(key);

        if (bucket.contains(key))
        {
            auto pair = bucket.at(key);
            return pair->second;
        }

        bucket.insert({key, Value()});
        m_size++;
        return bucket.at(key)->second;
    }

    void insert(const Pair& pair)
    {
        auto [key, value] = pair;
        auto& bucket = getBucket(key);

        if (bucket.contains(key))
        {
            auto pair = bucket.at(key);
            pair->second = value;
            return;
        }

        bucket.insert({key, value});
        m_size++;
    }

    Value& at(const Key& key)
    {
        auto& bucket = getBucket(key);
        auto pair    = bucket.at(key);

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
        auto& bucket = getBucket(key);
        auto pair    = bucket.at(key);

        if (!pair)
        {
            std::stringstream errMsg;
            errMsg << "key '" << key << "' doesn't exist";

            throw std::out_of_range(errMsg.str());
        }

        return pair->second;
    }

    void erase(const Key& key)
    {
        auto& bucket = getBucket(key);

        if (bucket.contains(key))
        {
            bucket.erase(key);
            m_size--;
        }
    }

    bool contains(const Key& key)
    {
        auto& bucket = getBucket(key);

        if (bucket.contains(key))
            return true;

        return false;
    }

    Iterator begin()
    {
        return Iterator(m_table, m_capacity);
    }

    Iterator end()
    {
        return Iterator(m_table + m_capacity, m_capacity);
    }

private:
    Bucket& getBucket(const Key& key)
    {
        auto hash    = hashFunc(key);
        auto index   = hash % m_capacity;

        return m_table[index];
    }

public:
    class HashTableIterator
    {
    private:
        Bucket* m_ptr{};

        size_t m_idx{};
        size_t m_size{};

        typename Bucket::Iterator m_it;

    public:
        HashTableIterator(Bucket* ptr, size_t size) : m_ptr{ptr}, m_size{size}, m_idx{0}
        {
            if (!ptr->empty())
            {
                m_it = m_ptr->begin();
                return;
            }

            do
            {
                m_ptr++;
                m_idx++;
                m_it = m_ptr->begin();
            } while (m_idx < size && m_ptr->empty());
        }

        virtual Pair& operator*() const
        {
            if (m_idx < m_size && !m_ptr->empty())
            {
                return *m_it;
            }
            else
            {
                std::stringstream errMsg;
                errMsg << "Index out of bounds" << m_idx;

                throw std::out_of_range(errMsg.str());
            }
        }
        virtual Pair* operator->()
        {
            if (m_idx < m_size && !m_ptr->empty())
            {
                return &*m_it;
            }
            else
            {
                std::stringstream errMsg;
                errMsg << "Index out of bounds" << m_idx;
                
                throw std::out_of_range(errMsg.str());
            }
        }

        HashTableIterator& operator++()
        {
            m_it++;
            if (m_it != m_ptr->end())
                return *this;

            do
            {
                m_ptr++;
                m_idx++;
                m_it = m_ptr->begin();
            } while (m_idx < m_size && m_it == m_ptr->end());

            return *this;
        }

        HashTableIterator operator++(int)
        {
            HashTableIterator it = *this;
            ++(*this);
            return it;
        }

        friend bool operator== (const HashTableIterator& a, const HashTableIterator& b) { return a.m_ptr == b.m_ptr; };
        friend bool operator!= (const HashTableIterator& a, const HashTableIterator& b) { return a.m_ptr != b.m_ptr; };
    };
};