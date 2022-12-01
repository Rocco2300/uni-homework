#include <iostream>

struct node
{
    int val;
    node *prev, *next;
};

node *first, *last;
int size;

int get_at(int pos)
{
    node* temp = first;

    int i = 0;
    while (temp && i < size && i != pos)
    {
        temp = (temp) ? temp->next : nullptr;
        i++;
    }

    return temp->val;
}

void insert_front(int val)
{
    node* nod = new node();
    nod->val = val;
    nod->prev = nullptr;
    nod->next = nullptr;

    if (first == nullptr)
    {
        first = nod;
        last = nod;
        size++;
        return;
    }

    nod->next = first;
    first->prev = nod;
    first = nod;
    size++;
}

void insert_last(int val)
{
    node* nod = new node();
    nod->val = val;
    nod->prev = nullptr;
    nod->next = nullptr;

    if (last == nullptr)
    {
        last = nod;
        first = nod;
        size++;
        return;
    }

    nod->prev = last;
    last->next = nod;
    last = nod;
    size++;
}

void insert_after(int val, int pos)
{
    node* left = first;
    int i = 0;

    while (left && i < size && i != pos)
    {
        left = (left) ? left->next : nullptr;
        i++;
    }

    node* right = left->next;

    node* nod = new node();
    nod->val = val;
    nod->prev = left;
    nod->next = right;

    left->next = nod;
    right->prev = nod;
    size++;
}

void remove_first()
{
    node* temp = first;
    first = first->next;
    first->prev = nullptr;

    delete temp;
    temp = nullptr;

    size--;
}

void remove_last()
{
    node* temp = last;
    last = last->prev;
    last->next = nullptr;
    
    delete temp;
    temp = nullptr;

    size--;
}

void remove_at(int pos)
{
    node* temp = first;

    int i = 0;
    while (temp && i < size && i != pos)
    {
        temp = (temp) ? temp->next : nullptr;
        i++;
    }

    node* left = temp->prev;
    node* right = temp->next;

    left->next = right;
    right->prev = left;

    delete temp;
    temp = nullptr;

    size--;
}

void print(bool inverse)
{

    if (!inverse)
    {
        for (int i = 0; i < size; i++)
        {
            std::cout << get_at(i) << " ";
        }
    }
    else 
    {
        for (int i = size - 1; i >= 0; i--)
        {
            std::cout << get_at(i) << " ";
        }
    }

    std::cout << '\n';
}

void print_submenu(int);

void print_menu()
{
    system("cls");

    std::cout << "1. Accessare element.\n";
    std::cout << "2. Inserare inceput.\n";
    std::cout << "3. Inserare final.\n";
    std::cout << "4. Inserare dupa.\n";
    std::cout << "5. Stergere primul.\n";
    std::cout << "6. Stergere ultimul.\n";
    std::cout << "7. Stergere la index.\n";
    std::cout << "8. Print.\n";
    std::cout << "9. Print invers.\n";

    int choice;
    std::cout << "Choice:";
    std::cin  >> choice;

    print_submenu(choice);
}

void print_submenu(int choice)
{
    int index, value;
    switch (choice)
    {
    case 1:
        std::cout << "Index: ";
        std::cin  >> index;
        std::cout << get_at(index) << std::endl;
        system("pause");
        break;
    case 2:
        std::cout << "Value: ";
        std::cin  >> value;
        insert_front(value);
        break;
    case 3:
        std::cout << "Value: ";
        std::cin  >> value;
        insert_last(value);
        break;
    case 4:
        std::cout << "Index: ";
        std::cin  >> index;
        std::cout << "Value: ";
        std::cin  >> value;
        insert_after(value, index);
        break;
    case 5:
        remove_first();
        break;
    case 6:
        remove_last();
        break;
    case 7:
        std::cout << "Index: ";
        std::cin  >> index;
        remove_at(index);
        break;
    case 8:
        print(false);
        system("pause");
        break;
    case 9:
        print(true);
        system("pause");
        break;
    default:
        exit;
    }

    print_menu();
}

int main()
{
    print_menu();

    return 0;
}