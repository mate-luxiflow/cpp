#include <iostream>
#include <string>
#include <ctime>

int main()
{
    srand(time(NULL));
    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "you win a stick\n";
        break;
    case 2:
        std::cout << "you win a tshirt\n";
        break;
    case 3:
        std::cout << "you win a lunch\n";
        break;
    case 4:
        std::cout << "you win a gift card\n";
        break;
    case 5:
        std::cout << "you win a concert\n";
        break;
    }

    return 0;
}