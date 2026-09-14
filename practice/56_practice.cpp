#include <iostream>
#include <string>

class gun
{
public:
    std::string name;
    std::string color;
    int pattern;

    gun(std::string name, std::string color, int pattern)
    {
        this->name = name;
        this->color = color;
        this->pattern = pattern;
    }
};

int main()
{
    gun gun1("sherrif", "red", 6754);
    gun gun2("vandal", "blue", 4352);

    std::cout << gun1.name << '\n';
    std::cout << gun1.color << '\n';
    std::cout << gun1.pattern << '\n';

    std::cout << gun2.name << '\n';
    std::cout << gun2.color << '\n';
    std::cout << gun2.pattern << '\n';

    return 0;
}