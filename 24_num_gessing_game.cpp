#include <iostream>
#include <string>
#include <ctime>

int main()
{

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    std::cout << "***********game*********\n";

    do
    {
        std::cout << "enter a guesss between 1-100: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "too high\n";
        }
        else if (guess < num)
        {
            std::cout << "too low\n";
        }
        else
        {
            std::cout << "correct!!! number of tries: " << tries << '\n';
        }

    } while (guess != num);

    std::cout << "********************number guessing game********************";

    return 0;
}