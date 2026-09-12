#include <iostream>
#include <string>

struct car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(car &car);
void paintCar(car &car, std::string color);

int main()
{

    car car1;
    car car2;

    car1.model = "mustang";
    car1.year = 2011;
    car1.color = "red";

    car2.model = "lamborghini";
    car2.year = 2015;
    car2.color = "black";

    paintCar(car1, "silver");
    paintCar(car2, "gold");

    std::cout << &car1 << '\n';
    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(car &car)
{
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(car &car, std::string color)
{
    car.color = color;
}