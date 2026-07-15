#include <iostream>

using text_t = std::string;

int main(){

    text_t name;
    int age;

    std::cout << "what your full name name? ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "whats your age? ";
    std::cin >> age;

    std::cout << "you are " << age << "years old" << '\n';
    std::cout << "hello " << name;




    return 0;
}
