#include <iostream>
#include <string>

class car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate()
    {
        std::cout << "you step on the gas\n";
    }
    void brake()
    {
        std::cout << "you step on the brake\n";
    }
};

int main()
{
    car car1;
    // lehetne folytatni
    car car2;

    car1.make = "ford";
    car1.model = "mustang";
    car1.year = 2010;
    car1.color = "gold";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}