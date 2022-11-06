#include <iostream>
#include <string>

struct node
{
    int val;
    node* next;
};

node* head;
int size;

void push(int val)
{
    node* newNode = new node();
    newNode->val = val;
    newNode->next = nullptr;

    if (!head)
    {
        head = newNode;
        size++;
        return;
    }

    node* temp = head;
    while (temp->next)
    {
        temp = (temp) ? temp->next : nullptr;
    }

    temp->next = newNode;
    size++;
}

void pop()
{
    node* temp = head;

    int i = 0;
    while (i < size - 2)
    {
        temp = (temp) ? temp->next : nullptr;
        i++;
    }

    std::cout << temp->val << std::endl;

    delete temp->next;
    temp->next = nullptr;
    size--;
}

void print()
{
    node* temp = head;

    while (temp)
    {
        std::cout << ((temp) ? std::to_string(temp->val) : "NULL") << "->";

        temp = (temp) ? temp->next : nullptr;
    }

    std::cout << "NULL\n";
}

int opt;

void do_opt();

void print_menu()
{
    system("cls");
    std::cout << "1. Push\n";
    std::cout << "2. Pop\n";
    std::cout << "3. Print\n";

    std::cout << "Opt: ";
    std::cin  >> opt;

    do_opt();
}

void do_opt()
{
    node* nodul;
    int val, index;
    switch (opt)
    {
    case 1:
        std::cout << "Enter a value: ";
        std::cin  >> val;
        push(val);
        break;
    case 2:
        pop();
        break;
    case 3:
        print();
        system("pause");
        break;
    default:
        std::cout << '\n' << "Bye!\n";
        return;
    }

    print_menu();
}
int main()
{
    print_menu();

    return 0;
}