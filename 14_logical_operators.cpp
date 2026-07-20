#include <iostream>

int main(){

    // && = check fi two conditions are true
    // || / check if at least one of two condition is true
    // ! = reverses the logical state of its operand

// && (and)

/*  int temp;

    std::cout << "enter the temp: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "the temp is good!";
    }
    else{
        std::cout << "the temp is bad";
    }
        */


    // || (or)

/*    int temp;
    
    std::cout << "enter the temp: ";
    std::cin >> temp;

    if(temp <= 0 || temp <= 30){
        std::cout << "the temp is bad!";
    }
    else{
        std::cout << "the temp is good";
    }
*/

    int temp;
    bool isssunny = false;
    
    std::cout << "enter the temp: ";
    std::cin >> temp;

    if(temp <= 0 || temp >= 30){
        std::cout << "the temp is bad!\n";
    }
    else{
        std::cout << "the temp is good\n";
    }

    if(!isssunny == false){
        std::cout << "it is cloudy outside";
    }
    else{
        std::cout << "it is sunny outside";
    }

    return 0;
}