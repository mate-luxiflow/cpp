#include <iostream>

//cout  << (insertion operator)
//cin << (extraction operator)


int main(){

    std::string name;
    int age;
    
    std::cout << "whats your age: ";
    std::cin >> age;

    std::cout << "whats your full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';

    std::cout << "you are " << age << " years old";

    return 0;
}

