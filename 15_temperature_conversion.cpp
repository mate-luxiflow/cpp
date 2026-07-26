#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "temperature conversion\n";
    std::cout << "F = fahrenheit\n";
    std::cout << "C = celsius\n";
    std::cout << "what unit woud you like to convert to: ";
    std::cin >> unit;

    if (unit == 'f' || unit == 'F')
    {
        std::cout << "enter the temperature in celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp + 32);
        std::cout << "temperature is: " << temp << " degrees F\n";
    }
    else if (unit == 'c' || unit == 'C')
    {
        std::cout << "enter the temperature in fahrenheit: ";
        std::cin >> temp;

        temp = ((temp - 32) / 1.8);
        std::cout << "temperature is: " << temp << " degrees C\n";
    }
    else
    {
        std::cout << "please enter only C or F\n";
    }

    std::cout << "******************************\n";
    return 0;
}