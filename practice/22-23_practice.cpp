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
        std::cout << "heads,you can open a box\n";

        int loot = (rand() % 4) + 1;

        switch (loot)
        {
        case 1:
            std::cout << "common";
            break;
        case 2:
            std::cout << "rare";
            break;
        case 3:
            std::cout << "epic";
            break;
        case 4:
            std::cout << "legendary";
            break;
        }
    }
    else
    {
        std::cout << "tails, better luck next time you cant open shi";
    }

    return 0;
}