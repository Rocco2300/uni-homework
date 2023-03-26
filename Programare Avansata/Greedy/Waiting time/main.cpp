#include <algorithm>
#include <iostream>
#include <numeric>
#include <utility>
#include <fstream>
#include <vector>

bool compare(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    return a.second < b.second;
}

int main()
{
    std::ifstream in("persoane.txt");
    int n;
    std::vector<std::pair<int, int>> persoane;

    in >> n;
    for (int i = 0; i < n; i++)
    {
        int timp;
        in >> timp;

        persoane.emplace_back(i + 1, timp);
    }

    std::vector<int> timpiAsteptare1(persoane.size());
    timpiAsteptare1[0] = persoane[0].second;
    for (int i = 1; i < persoane.size(); i++)
    {
        const auto &[id, timp] = persoane[i];
        timpiAsteptare1[i] = timp + timpiAsteptare1[i - 1];
    }
    float ma1 = std::accumulate(timpiAsteptare1.begin(), timpiAsteptare1.end(), 0) 
                / static_cast<float>(timpiAsteptare1.size());

    std::cout << ma1 << '\n';

    std::sort(persoane.begin(), persoane.end(), compare);

    std::vector<int> timpiAsteptare2(persoane.size());
    timpiAsteptare2[0] = persoane[0].second;
    for (int i = 1; i < persoane.size(); i++)
    {
        const auto &[id, timp] = persoane[i];
        timpiAsteptare2[i] = timp + timpiAsteptare2[i - 1];
    }
    float ma2 = std::accumulate(timpiAsteptare2.begin(), timpiAsteptare2.end(), 0) 
                / static_cast<float>(timpiAsteptare2.size());

    std::cout << ma2 << '\n';


    return 0;
}