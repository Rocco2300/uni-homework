#pragma once

#include "Pair.h"

template <typename Key, typename Value>
class Bucket
{
private:
    struct Node
    {
        Pair<Key, Value> pair{};
        Node* next{};

        Node() = default;
        Node(Pair<Key, Value> pair) : pair{pair}, next{nullptr} { }
    };

    using Pair = Pair<Key, Value>;

private:
    Node* head{};

public:
    Bucket() = default;

    ~Bucket()
    {
        Node* prev = head;

        while (head->next)
        {
            head = head->next;
            delete prev;
            prev = head;
        }

        delete prev;
    }

    void insert(Pair pair)
    {
        if (head == nullptr)
        {
            head = new Node(pair);
            return;
        }

        Node* temp = head;

        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = new Node(pair);
    }

    Pair* get(Key key)
    {
        Node* temp = head;

        while (temp && temp->pair.first != key)
        {
            temp = (temp) ? temp->next : nullptr;
        }

        return (temp) ? &temp->pair : nullptr;
    }

    bool find(Key key)
    {
        Node* temp = head;

        while (temp && temp->pair.first != key)
        {
            temp = (temp) ? temp->next : nullptr;
        }

        return (temp) ? true : false;
    }

    void remove(Key key)
    {
        if (!find(key) || !head)
        {
            return;
        }

        Node* temp = head;

        if (head->pair.first == key)
        {
            head = temp->next;
            delete temp;
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
    }
};