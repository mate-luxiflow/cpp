#include <iostream>
#include <string>

enum day
{
    sunday = 0,
    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6
};

int main()
{
    // enums = a user-defined data type that consists
    //          of a paired named-integer constants
    //          great if you a set of potential options

    day today = sunday;

    // cases could be tha number value that is written in
    // the enum so if i type case = 0 it would still work and show sunday

    switch (today)
    {
    case sunday:
        std::cout << "it is a sunday\n";
        break;
    case monday:
        std::cout << "it is a monday\n";
        break;
    case tuesday:
        std::cout << "it is a tuesday\n";
        break;
    case wednesday:
        std::cout << "it is a wednesday\n";
        break;
    case thursday:
        std::cout << "it is a thrusday\n";
        break;
    case friday:
        std::cout << "it is a friday\n";
        break;
    case saturday:
        std::cout << "it is a saturday\n";
        break;
    }

    return 0;
}