#include <iostream>
#include <string>

class human
{
public:
    std::string name = "rick";
    std::string occupation = "fityma";
    int age = 70;

    void eat()
    {
        std::cout << "this person is eating\n";
    }
    void drink()
    {
        std::cout << "this person is drinking\n";
    }
    void sleep()
    {
        std::cout << "this person is sleeping\n";
    }
};

int main()
{
    // object = a collection of attributes and methods
    //          they can have characteristics and could perform actions
    //          can be used to mimic real world items(ex. phone, book, dog)
    //          created from a class wich acts as a "blueprint"

    human human1;
    human human2;
    /*
        human1.name = "mate";
        human1.occupation = "pro dev";
        human1.age = 16;

        human2.name = "rick";
        human2.occupation = "scientist";
        human2.age = 70;
    */
    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}