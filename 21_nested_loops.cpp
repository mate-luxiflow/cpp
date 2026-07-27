#include <iostream>
#include <string>

int main()
{
    /*
    loop(){
        loop(){
        }
    }*/

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }

    // practice from vid

    int rows;
    int cols;
    char symbol;

    std::cout << "how many rows: ";
    std::cin >> rows;
    std::cout << "how many coloumns: ";
    std::cin >> cols;
    std::cout << "enter a symbol to use: ";
    std::cin >> symbol;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    // practice

    int h;
    char symbol1;

    std::cout << "enter a height: ";
    std::cin >> h;
    std::cout << "enter a symbol to use: ";
    std::cin >> symbol1;

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << symbol1;
        }
        std::cout << '\n';
    }

    // preactice
    int h1;
    char symbol2;

    std::cout << "enter a height: ";
    std::cin >> h1;
    std::cout << "enter a symbol to use: ";
    std::cin >> symbol2;

    for (int i = h1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << symbol2;
        }
        std::cout << '\n';
    }

    return 0;
}