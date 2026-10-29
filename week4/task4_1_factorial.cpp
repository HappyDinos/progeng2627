#include <iostream>

int myfactorial(int in)
{
    int fact = 1;
    if (in != 0)
    {
        for (int i = 1; i <= in; i++)
        {
            fact = fact * i;
        }
    }
    else
    {
        fact = 1;
    }

    return fact;
}
int main()
{
    int x;
    std::cout << "input a number" << std::endl;
    std::cin >> x;
    std::cout << myfactorial(x) << std::endl;
}