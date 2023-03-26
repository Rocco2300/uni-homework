#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>

struct Object
{
    int ID;
    float weight, value;
};

bool ratioCmp(const Object& a, const Object& b)
{
    return (a.value / a.weight) > (b.value / b.weight);
}

int main()
{
    std::ifstream in("data.txt");
    int G;
    in >> G;
    int n;
    in >> n;

    std::vector<Object> objects;
    for (int i = 0; i < n; i++)
    {
        Object obj;
        obj.ID = i + 1;
        in >> obj.value >> obj.weight;
        
        objects.push_back(obj);
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "ID " << objects[i].ID << ": " << objects[i].value / objects[i].weight << '\n';
    }
    std::cout << '\n';

    float weight = 0, winnings = 0;
    for (int i = 0; i < n; i++)
    {
        if (weight + objects[i].weight <= G)
        {
            winnings += objects[i].value;
            weight += objects[i].weight;
        }
    }

    std::cout << "Winnings: " << '\n' << winnings << '\n';

    std::sort(objects.begin(), objects.end(), ratioCmp);

    for (int i = 0; i < n; i++)
    {
        std::cout << "ID " << objects[i].ID << ": " << objects[i].value / objects[i].weight << '\n';
    }
    std::cout << '\n';

    weight = 0;
    winnings = 0;
    for (int i = 0; i < n; i++)
    {
        if (weight + objects[i].weight <= G)
        {
            winnings += objects[i].value;
            weight += objects[i].weight;
        }
    }

    std::cout << "Winnings: " << '\n' << winnings << '\n';

    return 0;
}