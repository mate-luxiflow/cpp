#include <iostream>

int main(){

    int age;
    bool hasvip;

    std::cout << "enter your age: ";
    std::cin >> age;

    std::cout << "do you have vip acces?: ";
    std::cin >> hasvip;

    if(age >= 12 && hasvip || age >= 18){
        std::cout << "welcome on the ride\n";
    }
    else{
        std::cout << "sorry you cant ride\n";
    }

    if(!hasvip){
        std::cout << "tipp buy vip to skip line\n";
    }

    std::cout << (age < 12 ? "ticket price 10$" : "ticket price 20$");

    return 0;
}