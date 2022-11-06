#include <iostream>
#include <string>

struct node
{
    int val;
    node* next;
};

node* head;
int size;

void insert_back(int val)
{
    node* newNode = new node();

    newNode->val  = val;
    newNode->next = nullptr;
    
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        node* temp = head;

        while (temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    size++;
}

void insert_front(int val)
{
    node* newNode = new node();

    newNode->val  = val;
    newNode->next = nullptr;
    
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }

    size++;
}

node* get_node(int index)
{
    if (index < 0 || index > size)
    {
        std::cout << "Index out of bounds!\n";
        return nullptr;
    }

    node* temp = head;

    while (temp && index > 0)
    {
        temp = (temp) ? temp->next : nullptr;

        index--;
    }

    return nullptr;
}

void insert_after(int index, int val)
{
    node* prevNode = get_node(index);

    node* newNode = new node();
    newNode->val  = val;
    newNode->next = prevNode->next;

    prevNode->next = newNode;

    size++;
}

void remove_first()
{
    node* prevHead = head;
    node* second = (head) ? head->next : nullptr;

    if (head)
    {
        head = second;
        delete prevHead;
        prevHead = nullptr;
        size--;
    }
}

void remove_last()
{
    node* temp = head;

    int i = 0;
    while (i <= size - 2)
    {
        temp = (temp) ? temp->next : nullptr;
        i ++;
    }   

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
    std::cout << "1. Inserare inceput\n";
    std::cout << "2. Inserare sfarsit\n";
    std::cout << "3. Inserare dupa elem\n";
    std::cout << "4. Accesare element\n";
    std::cout << "5. Eliminare primul\n";
    std::cout << "6. Eliminare ultimul\n";
    std::cout << "7. Printare lista\n";

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
        insert_front(val);
        break;
    case 2:
        std::cout << "Enter a value: ";
        std::cin  >> val;
        insert_back(val);
        break;
    case 3:
        std::cout << "Enter a value: ";
        std::cin  >> val;
        std::cout << "Enter index: ";
        std::cin  >> index;
        insert_after(index, val);
        break;
    case 4:
        std::cout << "Enter a index: ";
        std::cin  >> index;
        nodul = get_node(index);
        std::cout << "Node #" << index << ' ' << nodul->val << '\n';
        break;
    case 5:
        remove_first();
        break;
    case 6:
        remove_last();
        break;
    case 7:
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