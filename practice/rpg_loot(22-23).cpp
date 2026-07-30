#include <iostream>
#include <string>
#include <ctime>

int main()
{

    srand(time(NULL));

    int coin = (rand() % 2) + 1;

    std::cout << "your number is: " << coin << '\n';

    if (coin == 1)
    {
        std::cout << "heads, you can open a box\n";

        int loot = (rand() % 100) + 1;

        if (loot <= 60)
        {
            std::cout << "common (60% chance)\n";
        }
        else if (loot <= 85)
        {
            std::cout << "rare (25% chance)\n";
        }
        else if (loot <= 97)
        {
            std::cout << "epic (12% chance)\n";
        }
        else
        {
            std::cout << "legendary (3% chance)\n";
        }
    }
    else
    {
        std::cout << "tails, you cant open nth better luck next time\n";
    }

    return 0;
}