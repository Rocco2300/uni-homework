#include <iostream>

int* data;
int size;
int capacity;

int opt;

void insert(int val, int poz)
{
    if (poz < 0 || poz > size + 1)
    {
        std::cout << "Index out of range on insert.\n";
        return;
    }

    if (size == capacity)
    {
        std::cout << "No space left for insert.\n";
        return;
    }

    for (int i = size; i > poz; i--)
    {
        data[i] = data[i-1];
    }

    data[poz] = val;
    size++;
}

void remove(int poz)
{
    if (poz < 0 || poz > size)
    {
        std::cout << "Index out of range on remove.\n";
        return;
    }

    for (int i = poz; i < size; i++)
    {
        data[i] = data[i+1];
    }

    size--;
}

int get(int poz)
{
    if (poz < 0 || poz > size)
    {
        std::cout << "Index out of range on get.\n";
        return -1;
    }

    return data[poz];
}

void modify(int val, int poz)
{
    if (poz < 0 || poz > size)
    {
        std::cout << "Index out of range on modify.\n";
        return;
    }

    data[poz] = val;
}

void create()
{
    std::cout << "Capacity: ";
    std::cin  >> capacity;

    data = new int[capacity];

    int n;
    do 
    {
        std::cout << "How many elems do you want to insert?: ";
        std::cin  >> n;
    } while (n > capacity);

    for (int i = 0; i < n; i++)
    {
        int val;
        std::cout << "Val " << i << ": ";
        std::cin  >> val;
        
        insert(val, i);
    }
}

void print()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << data[i] << ' ';
    }
    std::cout << '\n';
}

void main_menu();

void warn()
{
    if (data == nullptr)
    {
        std::cout << "Lista nu a fost creata.\n";
        main_menu();
    }
}

void sub_menu();

void main_menu()
{
    std::cout << "1. Introducere element\n";
    std::cout << "2. Stergere element\n";
    std::cout << "3. Accesare element\n";
    std::cout << "4. Modificare element\n";
    std::cout << "5. Creare lista\n";
    std::cout << "6. Afisare lista\n";

    std::cout << "Optiune: ";
    std::cin  >> opt;

    sub_menu();
}

void sub_menu()
{
    int val, pos;
    switch (opt)
    {
    case 1:
        warn();
        std::cout << "Valoare: ";
        std::cin  >> val;
        std::cout << "Pozitie: ";
        std::cin  >> pos;
        insert(val, pos);
        break;
    case 2:
        warn();
        std::cout << "Pozitie: ";
        std::cin  >> pos;
        remove(pos);
        break;
    case 3:
        warn();
        std::cout << "Pozitie: ";
        std::cin  >> pos;
        std::cout << "Elementul este: " << get(pos) << '\n';
        break;
    case 4:
        warn();
        std::cout << "Valoare: ";
        std::cin  >> val;
        std::cout << "Pozitie: ";
        std::cin  >> pos;
        modify(val, pos);
        break;
    case 5:
        create();
        break;
    case 6:
        warn();
        print();
        break;
    default:
        exit(EXIT_SUCCESS);
        break;
    }

    main_menu();
}

int main()
{
    main_menu();

    return 0;
}