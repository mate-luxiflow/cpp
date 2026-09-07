#include <iostream>
#include <string>

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        std::cout << i << '\n';
    }
    std::cout << "happy new year\n";

    // practice

    for (int i = 10; i >= 0; i--)
    {
        std::cout << i << '\n';
    }

    std::cout << "liftoff\n";

    // count by 2

    for (int i = 10; i >= 0; i -= 2)
    {
        std::cout << i << '\n';
    }

    std::cout << "lift off\n";

    // another fun i tought about

    for (int i = 1; i <= 100; i++)
    {
        std::cout << "I LOVE YOU\n";
    }

    return 0;
}