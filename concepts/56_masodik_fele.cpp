#include <iostream>
#include <string>

class car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;
    car(std::string make, std::string model, int year, std::string color)
    {
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};

int main()
{
    car car1("chevy", "corvette", 2020, "green");
    car car2("ford", "mustang", 2010, "gold");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    return 0;
}