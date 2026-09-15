#include <iostream>
#include <string>

class animal
{
public:
    bool alive = true;
    void eat()
    {
        std::cout << "this animal is eating\n";
    }
};
class dog : public animal
{
public:
    void bark()
    {
        std::cout << "the dog goes woof\n";
    }
};
class cat : public animal
{
public:
    void meow()
    {
        std::cout << "the cat goes meow\n";
    }
};

int main()
{
    // inheritance = a class can recieve attributes and methods from another class
    //              children classes inherit from a parent class
    //              helps to reuse similar code found within multiple classes

    dog dog;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << '\n';

    cat cat;
    cat.eat();
    cat.meow();

    return 0;
}