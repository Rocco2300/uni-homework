#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>

bool compare(const std::tuple<int, int, int>& a, const std::tuple<int, int, int>& b)
{
    const auto& [id1, ts1, tf1] = a;
    const auto& [id2, ts2, tf2] = b;
    return tf1 < tf2;
}

int main()
{
    std::ifstream in("spectacole.txt");

    int n;
    in >> n;
    std::vector<std::tuple<int, int, int>> spectacole;
    for (int i = 0; i < n; i++)
    {
        char aux;
        int hs, ms, hf, mf;
        in >> hs >> aux >> ms >> aux >> hf >> aux >> mf;

        spectacole.emplace_back(i + 1, hs * 60 + ms, hf * 60 + mf);
    }

    std::sort(spectacole.begin(), spectacole.end(), compare);

    std::vector<std::tuple<int, int, int>> result;
    result.push_back(spectacole[0]);
    for (int i = 1; i < spectacole.size(); i++)
    {
        const auto& [id, hs, hf] = spectacole[i];
        const auto& [prevId, prevHs, prevHf] = result.back();
        
        if (hs >= prevHf)
        {
            result.push_back(spectacole[i]);
        }
    }

    std::cout << result.size() << '\n';

    return 0;
}