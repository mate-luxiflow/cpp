#include <iostream>
#include <string>
#include <ctime>

int main()
{
    // sizeof() = detemines the size of bytes of a:
    //           variable, data type, class, objects, etc.

    std::string name = "mate";
    double gpa = 2.5;
    char grade = 'f';
    bool student = true;
    char grades[] = {'a', 'b', 'c', 'd', 'f', 'e'};
    std::string students[] = {"mate", "patrick", "bro"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) / sizeof(char) << " elements\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}