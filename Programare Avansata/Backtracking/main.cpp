#include <iostream>
#include <numeric>
#include <fstream>
#include <vector>

int n, p;
std::vector<std::vector<int>> res;

void checkFixedPoints(std::vector<int> v)
{
    int x = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if ((i + 1) == v[i])
        {
            x++;
        }
    }

    if (x == p)
        res.push_back(v);
}

void permute(std::vector<int>& v, int l, int r)
{
    if (l == r)
    {
        checkFixedPoints(v);
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            std::swap(v[l], v[i]);

            permute(v, l + 1, r);

            std::swap(v[l], v[i]);
        }
    }
}

void print()
{
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            std::cout << res[i][j] << ((j == res[i].size() - 1) ? " " : ", ");
        }

        std::cout << '\n';
    }

    std::cout << '\n';
}

int main()
{
    // citim n si p
    std::ifstream in("input.txt");
    in >> n >> p;
    in.close();

    std::vector<int> v(n);
    std::iota(v.begin(), v.end(), 1);

    permute(v, 0, v.size() - 1);
    print();
    return 0;
}