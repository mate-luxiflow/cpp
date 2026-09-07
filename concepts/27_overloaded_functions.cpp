#include <iostream>
#include <string>
#include <ctime>

void bakepizza();
void bakepizza(std::string topping1);
void bakepizza(std::string topping1, std::string topping2);

int main()
{

    bakepizza("pepperoni", "peper");

    return 0;
}

void bakepizza() {}

void bakepizza(std::string topping1)
{
    std::cout << "here is your " << topping1 << " pizza\n";
}
void bakepizza(std::string topping1, std::string topping2)
{
    std::cout << "here is your " << topping1 << " and " << topping2 << " pizza\n";
}