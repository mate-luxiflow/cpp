#include <iostream>
#include <string>

int main()
{
    // break = break out of a loop
    // continue = skip a current iteration

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            continue;
        }
        std::cout << i << '\n';
    }

    return 0;
}