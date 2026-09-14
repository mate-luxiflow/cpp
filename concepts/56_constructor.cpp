#include <iostream>
#include <string>

class student
{
public:
    std::string name;
    int age;
    double gpa;

    student(std::string name, int age, double gpa) // HA ITT NM ugyanaz mint alul akkor nm kell a this de
    //                                        ha std::string lenne es ugy akarom a namet megadni akkor kell h ne legyen osszekeverve
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};

int main()
{
    // constructor = special method that is automatically called when an object is instantiated
    //               useful for assigning values to attributes as arguments

    student student1("fityma", 16, 4.1);
    student student2("fity", 40, 1.2);
    student student3("sandy", 21, 67);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    return 0;
}