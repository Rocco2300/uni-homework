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
        for (size_t i = 0; i < str.size(); i++)
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
    using IntPair   = Pair<Key, Value>;
    using IntBucket = Bucket<Key, Value>;

public:
    class HashTableIterator;
    using Iterator = HashTableIterator;

private:
    IntBucket* m_table{};
    size_t m_capacity{};
    size_t m_size{};

    HashFunc hashFunc;

public:
    HashTable() : m_capacity{100}, m_size{0}
    {
        m_table = new IntBucket[m_capacity];
    }

    ~HashTable()
    {
        delete[] m_table;
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
        IntBucket* bucket = &getBucket(key);

        if (bucket->contains(key))
        {
            auto pair = bucket->at(key);
            return pair->second;
        }

        if (m_size >= m_capacity)
        {
            realloc();
            bucket = &getBucket(key);
        }

        bucket->insert({key, Value()});
        m_size++;
        return bucket->at(key)->second;
    }

    void insert(const IntPair& pair)
    {
        auto [key, value] = pair;
        IntBucket* bucket = &getBucket(key);

        if (bucket->contains(key))
        {
            auto ret = bucket->at(key);
            ret->second = value;
            return;
        }

        if (m_size >= m_capacity)
        {
            realloc();
            bucket = &getBucket(key);
        }

        bucket->insert({key, value});
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

    void clear()
    {
        m_size = 0;
        m_capacity = 1;

        delete[] m_table;
        m_table = new IntBucket[m_capacity];
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
    IntBucket& getBucket(const Key& key)
    {
        auto hash    = hashFunc(key);
        auto index   = hash % m_capacity;

        return m_table[index];
    }

    std::vector<IntPair> getPairs()
    {
        std::vector<IntPair> res;

        for (const auto& pair : *this)
        {
            res.push_back(pair);
        }

        return res;
    }

    void realloc()
    {
        auto pairs = getPairs();

        delete[] m_table;
        m_table = nullptr;

        m_size = 0;
        m_capacity *= 2;
        m_table = new IntBucket[m_capacity];

        for (const auto& pair : pairs)
        {
            insert(pair);
        }
    }

public:
    class HashTableIterator
    {
    private:
        IntBucket* m_ptr{};

        size_t m_idx{};
        size_t m_size{};

        typename IntBucket::Iterator m_it;

    public:
        HashTableIterator(IntBucket* ptr, size_t size) : m_ptr{ptr}, m_idx{0}, m_size{size}
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

        virtual IntPair& operator*() const
        {
            if (m_idx < m_size && !m_ptr->empty())
            {
                return *m_it;
            }
            else
            {
                std::stringstream errMsg;
                errMsg << "Index out of bounds " << m_idx;

                throw std::out_of_range(errMsg.str());
            }
        }

        virtual IntPair* operator->()
        {
            if (m_idx < m_size && !m_ptr->empty())
            {
                return &*m_it;
            }
            else
            {
                std::stringstream errMsg;
                errMsg << "Index out of bounds " << m_idx;

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

        friend bool operator==(const HashTableIterator& a, const HashTableIterator& b)
        {
            return a.m_ptr == b.m_ptr;
        };

        friend bool operator!=(const HashTableIterator& a, const HashTableIterator& b)
        {
            return !(a == b);
        };
    };
};