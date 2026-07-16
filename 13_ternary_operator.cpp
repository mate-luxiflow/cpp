#include <iostream>

int main(){

    //ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    //int grade = 75;

    //grade >= 60 ? std::cout << "you pass!" : std::cout << "you fail!";

    //int num = 8;
    //num % 2 == 1 ? std::cout << "odd" : std::cout << "even";

    bool hungry = false;
    //hungry ? std::cout << "you are hungry" : std::cout << "you are full";
    std::cout << (hungry ? "you are hungry" : "you are full");

    return 0;
}