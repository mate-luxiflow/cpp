#include <iostream>
#include <string>

class icecream
{
public:
    std::string flavor1;
    std::string flavor2;

    icecream()
    {
    }
    icecream(std::string flavor1)
    {
        this->flavor1 = flavor1;
    }
    icecream(std::string flavor1, std::string flavor2)
    {
        this->flavor1 = flavor1;
        this->flavor2 = flavor2;
    }
};

int main()
{

    icecream icecream1("vanilla");
    icecream icecream2("mango", "chocoalte");

    std::cout << icecream1.flavor1 << '\n';
    std::cout << '\n';

    std::cout << icecream2.flavor1 << '\n';
    std::cout << icecream2.flavor2 << '\n';

    return 0;
}