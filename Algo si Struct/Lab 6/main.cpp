#include <iostream>
#include <cstring>
#include <string>
#include <stack>

int ordine(char op)
{
    if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else 
        return 0;
}

std::string infixToPostfix(std::string expresie)
{
    std::string res;
    std::stack<char> stack;

    for (int i = 0; i < expresie.length(); i++)
    {
        if (isalnum(expresie[i]))
        {
            res += expresie[i];
        }
        else 
        {            
            if (stack.empty() || ordine(stack.top()) < ordine(expresie[i]))
            {
                stack.push(expresie[i]);
            }
            else 
            {
                while (!stack.empty() && ordine(stack.top()) >= ordine(expresie[i]))
                {
                    res += stack.top();
                    stack.pop();
                }

                stack.push(expresie[i]);
            }
        }
    }

    while (!stack.empty())
    {
        res += stack.top();
        stack.pop();
    }

    return res;
}

int main()
{
    std::string input, res;
    std::cout << "Introduceti o expresie care sa fie formata din numere si op(+, -, *, /): \n";
    std::cin  >> input;

    res = infixToPostfix(input);
    std::cout << res << std::endl;

    return 0;
}