#include <iostream>
#include <string>

class dog
{
public:
    std::string name = "bobi";
    int age = 4;
    std::string breed = "rottweiler";

    void lick()
    {
        std::cout << "your dog is licking your feet type shi\n";
    }
    void bark()
    {
        std::cout << "your annoying ahh dog is barking type shi\n";
    }
};

int main()
{
    dog dog1;
    std::cout << dog1.name << '\n';
    std::cout << dog1.age << '\n';
    std::cout << dog1.breed << '\n';

    dog1.lick();
    dog1.bark();

    return 0;
}