#include <iostream>
#include <string>
#include <ctime>

void happybday(std::string name, int age);

int main()
{
    // function = a block of reusable code

    std::string name = "mate";
    int age = 16;

    happybday(name, age);

    return 0;
}

void happybday(std::string name, int age)
{
    std::cout << "happy birthday to " << name << '\n';
    std::cout << "happy birthday to " << name << '\n';
    std::cout << "happy birthday to " << name << '\n';
    std::cout << "happy birthday to " << name << '\n';
    std::cout << "you are " << age << " years old" << '\n';
}