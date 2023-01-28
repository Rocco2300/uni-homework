#pragma once

#include "Pair.h"

template <typename Key, typename Value>
class Bucket
{
private:
    using IntPair = Pair<Key, Value>;

    struct Node
    {
        IntPair pair{};
        Node* next{};

        Node() = default;
        Node(IntPair pair) : pair{pair}, next{nullptr} { }
    };

public:
    class BucketIterator;
    using Iterator = BucketIterator;

private:
    Node* m_head{};
    size_t m_size{};

public:
    Bucket() = default;

    ~Bucket()
    {
        Node* current = m_head;
        Node* next;

        while (current != NULL)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }

    bool empty()
    {
        return m_size == 0;
    }

    size_t size()
    {
        return m_size;
    }

    void insert(IntPair pair)
    {
        if (m_head == nullptr)
        {
            m_head = new Node(pair);
            m_size++;
            return;
        }

        Node* temp = m_head;

        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = new Node(pair);
        m_size++;
    }

    IntPair* at(Key key)
    {
        Node* temp = m_head;

        while (temp && temp->pair.first != key)
        {
            temp = (temp) ? temp->next : nullptr;
        }

        return (temp) ? &temp->pair : nullptr;
    }

    const IntPair* at(Key key) const
    {
        Node* temp = m_head;

        while (temp && temp->pair.first != key)
        {
            temp = (temp) ? temp->next : nullptr;
        }

        return (temp) ? &temp->pair : nullptr;
    }

    bool contains(Key key)
    {
        Node* temp = m_head;

        while (temp && temp->pair.first != key)
        {
            temp = (temp) ? temp->next : nullptr;
        }

        return (temp) ? true : false;
    }

    void erase(Key key)
    {
        if (!find(key) || !m_head)
        {
            return;
        }

        Node* temp = m_head;

        if (m_head->pair.first == key)
        {
            m_head = temp->next;
            delete temp;
            m_size--;
            return;
        }

        while (temp && temp->next && temp->next->pair.first != key)
        {
            temp = temp->next;
        }

        if (!temp || !temp->next)
            return;

        Node* next = temp->next->next;
        delete temp->next;
        temp->next = next;
        m_size--;
    }

    void clear()
    {
        Node* current = m_head;
        Node* next;

        while (current != NULL)
        {
            next = current->next;
            delete current;
            current = next;
        }
    }

    Iterator begin()
    {
        return Iterator(m_head);
    }

    Iterator end()
    {
        return Iterator(nullptr);
    }

public:
    class BucketIterator
    {
    private:
        Node* ptr;

    public:
        BucketIterator() : ptr{nullptr} { }
        BucketIterator(Node* ptr) : ptr{ptr} { }

        BucketIterator(const BucketIterator& other)
        {
            this->ptr = other.ptr;
        }

        void operator=(const BucketIterator& other)
        {
            this->ptr = other.ptr;
        }

        IntPair& operator*() const { return ptr->pair; }
        IntPair* operator->() { return &ptr->pair; }

        BucketIterator& operator++()
        {
            if (ptr)
                ptr = ptr->next;
            return *this;
        }

        BucketIterator operator++(int)
        {
            BucketIterator it = *this;
            ++(*this);
            return it;
        }

        friend bool operator== (const BucketIterator& a, const BucketIterator& b) { return a.ptr == b.ptr; };
        friend bool operator!= (const BucketIterator& a, const BucketIterator& b) { return a.ptr != b.ptr; };
    };
};