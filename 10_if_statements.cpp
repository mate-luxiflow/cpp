#include <iostream>

int main(){
    // if statemtnts = do something if a condition is true
    //                  if not, then dont do it.

    int age;

    std::cout << "enter your age: ";
    std::cin >> age;

     if(age >= 100){
        std::cout << "you are too old to enter this site";
    }
    else if(age >= 18){
        std::cout << "welcome to the site";
    }
    else if(age < 0){
        std::cout << "you havent been born yet";
    }

    else{
        std::cout << "you are not old enough to enter the site";
    }

    return 0;
}
