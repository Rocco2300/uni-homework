#include <iostream>
#include <numeric>
#include <fstream>
#include <vector>
#include <string>

void read(const std::string& filepath, int& amount, std::vector<int>& coins)
{
    std::ifstream in(filepath);
    in >> amount;
    
    int x;
    while (in >> x)
    {
        coins.push_back(x);
    }
    in.close();
}

int solution(int amount, const std::vector<int>& coins)
{
    std::vector<int> dp(amount + 1, amount + 1);
    dp[0] = 0;

    for (int amt = 1; amt < dp.size(); amt++)
    {
        for (const auto& coin : coins)
        {
            if (amt - coin >= 0)
            {
                dp[amt] = std::min(dp[amt], 1 + dp[amt - coin]);
            }
        }
    }

    return (dp[amount] != amount + 1) ? dp[amount] : -1;
}

int main()
{
    int amount;
    std::vector<int> coins;

    read("input.txt", amount, coins);

    std::cout << solution(amount, coins);

    return 0;
}