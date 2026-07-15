#include <iostream>

int main(){
    
    char light;
    std::cout << "enter the color of the light (g,y,r): ";
    std::cin >> light;

    switch(light){
        case 'g':
        case 'G':
            std::cout << "you can go its green";
            break;
        case 'y':
        case 'Y':
            std::cout << "its yellow slow down";
            break;
        case 'r':
        case 'R':
            std::cout << "stop! its red dont go";
            break;
        default:
            std::cout << "please enter a valid color(g,y,r or the uppercase version of them)";
    }
}