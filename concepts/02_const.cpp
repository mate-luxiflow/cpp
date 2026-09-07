#include <iostream>

int main(){
    //the const keyword specifies that a vriables value is constant
    //tells the compiler prevent anything from modifying it 
    //(read only)

    const double PI = 3.14159;
    double radius = 10;
    double cir = 2 * PI * radius;

    const int light_s = 299792458;
    const int w = 1920;
    const int h = 1080;
    const int mate = 189;

    std::cout << cir << "cm" << '\n';
    std::cout << mate << "cm";




    return 0;
}
