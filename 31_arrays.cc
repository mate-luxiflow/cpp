#include <iostream>
#include <string>
#include <ctime>

int main()
{
    // array = a data structure that can hold multiple values
    //          values are accessed by an index number
    //          "kind of like a variable that hold multiple values"

    // std::string car[] = {"audi", "mustang", "corvette"};

    std::string car[3];

    car[0] = "camaro";
    car[1] = "mustang";
    car[2] = "camry";

    std::cout << car[0] << '\n';
    std::cout << car[1] << '\n';
    std::cout << car[2] << '\n';

    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    // practice a bit

    int number[4];

    number[0] = 10;
    number[1] = 11;
    number[2] = 13;
    number[3] = 18;

    std::cout << number[0] << '\n';
    std::cout << number[1] << '\n';
    std::cout << number[2] << '\n';
    std::cout << number[3] << '\n';

    return 0;
}