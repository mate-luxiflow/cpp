/*#include <iostream>
#include <string>
#include <ctime>

double square(double lenght);
double cube(double lenght);

int main()
{
    // return = return a value back to the spot
    //          where you called the encompassing fucntion

    double length = 5.0;
    double area = square(length);
    double volume = cube(length);

    std::cout << "area: " << area << "cm^2\n";
    std::cout << "volume: " << volume << "cm^3\n";

    return 0;
}
double square(double length)
{
    double result = length * length;
    return result;
}
double cube(double length)
{
    double result = length * length * length;
    return result;
}
    */

#include <iostream>
#include <string>
#include <ctime>

std::string concatstrings(std::string string1, std::string string2);

int main()
{
    std::string firstname = "mate";
    std::string lasname = "kov";
    std::string fullname = concatstrings(firstname, lasname);

    std::cout << "hello " << fullname;

    return 0;
}

std::string concatstrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}
