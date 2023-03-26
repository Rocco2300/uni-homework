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
    int capacity, n;
    in >> capacity >> n;

    std::vector<Object> objects;
    for (int i = 0; i < n; i++)
    {
        Object obj;
        obj.ID = i + 1;
        in >> obj.value >> obj.weight;

        objects.push_back(obj);
    }

    std::sort(objects.begin(), objects.end(), ratioCmp);

    float weight, winnings;
    for (int i = 0; i < n; i++)
    {
        if (weight + objects[i].weight <= capacity)
        {
            winnings += objects[i].value;
            weight += objects[i].weight;
        }
        else
        {
            float diff = capacity - weight;
            float percentage = diff / objects[i].weight;
            std::cout << percentage << '\n';

            winnings += (objects[i].value * percentage);
            break;
        }
    }

    std::cout << "\nWinnings: " << winnings << '\n';

    return 0;
}