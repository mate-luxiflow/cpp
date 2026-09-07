#include <iostream>
#include <string>
#include <ctime>

int main()
{
    // for each loop = loop that eases the traversal over an
    //               iterable data set

    std::string students[] = {"mate", "bro", "hello", "sandy"};
    int grades[] = {67, 45, 12, 99, 50};

    // prac
    char letters[] = {'a', 's', 'd', 'f', 'g'};

    for (std::string student : students)
    {
        std::cout << student << '\n';
    }

    for (int grade : grades)
    {
        std::cout << grade << '\n';
    }

    // lil prac
    for (char letter : letters)
    {
        std::cout << letter << '\n';
    }

    return 0;
}