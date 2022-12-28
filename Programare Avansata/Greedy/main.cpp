#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <limits>

double x, m = std::numeric_limits<double>::lowest();
std::vector<double> mVector;

void print(std::vector<double>& v)
{
    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}

double calculatePolinomial(std::vector<double>& coeff)
{
    double res = 0;
    int n = coeff.size();
    for (int i = 0; i < n; i++)
    {
        res += coeff[i] * std::pow(x, n - (i + 1));
    }

    return res;
}

void findMax(std::vector<double> v)
{
    if (calculatePolinomial(v) > m)
    {
        m = calculatePolinomial(v);
        mVector = v;
    }
}

void permute(std::vector<double>& v, int l, int r)
{
    if (l == r)
    {
        findMax(v);
        // std::cout << calculatePolinomial(v) << " ";
        // print(v);
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

bool isZero(double n)
{
    if (x > 0 && x < 1)
        return true;
    
    return false;
}

void sort(std::vector<double>& coeff)
{
    int mid = coeff.size() / 2;

    if (isZero(x))
    {
        std::sort(coeff.begin(), coeff.end());
    }
    else
    {
        std::sort(coeff.begin(), coeff.end());
        if (x > -1 && x < 0)
        {
            std::sort(coeff.begin(), coeff.begin() + mid, std::greater<double>());
            std::sort(coeff.begin() + mid, coeff.end());

            return;
        }

        std::sort(coeff.begin() + mid, coeff.end(), std::greater<double>());
    }
}

void shuffle(std::vector<double>& coeff)
{
    
}

void greedyMaxValueCoeffPermutation(std::vector<double>& coeff)
{
    if (isZero(x))
    {
        findMax(coeff);
    }
    if (x > 0)
    {
        findMax(coeff);
    }
    else if (x < 0)
    {
        int n = coeff.size();
        for (int i = 0; i < coeff.size(); i++)
        {
            if ((n - (i + 1)) % 2 == 0 && coeff[i] < coeff[n - 1])
            {
                std::swap(coeff[i], coeff[n - 1]);
            }
            else if ((n - (i + 1)) % 2 != 0 && coeff[i] > coeff[n - 1])
            {
                std::swap(coeff[i], coeff[n - 1]);
            }
        }

        findMax(coeff);
    }
}

int main()
{
    std::vector<double> a;

    std::ifstream in("input.txt");

    in >> x;    

    double temp;
    while (in >> temp)
    {
        a.push_back(temp);
    }

    permute(a, 0, a.size() - 1);
    print(mVector);
    std::cout << '\n' << m << '\n';

    m = std::numeric_limits<double>::lowest();

    greedyMaxValueCoeffPermutation(a);
    print(mVector);
    std::cout << '\n' << m << '\n';

    return 0;
}