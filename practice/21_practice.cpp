#include <iostream>
#include <string>

int main()
{
    // sima

    int h;
    char symbol;
    /*
        std::cout << "enter the height of the triangle: ";
        std::cin >> h;
        std::cout << "enter the symbol to use";
        std::cin >> symbol;

        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                std::cout << symbol;
            }
            std::cout << '\n';
        }
    */
    // fejjel lefele

    std::cout << "upside-down height: ";
    std::cin >> h;
    std::cout << "enter the symbol to use: ";
    std::cin >> symbol;

    for (int i = h; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }
}