#include <iostream>
#include <string>
#include <ctime>

int main()
{
    std::string students[] = {"mate", "bro", "hello", "sandy"};
    char grades[] = {'a', 'b', 'c', 'd', 'f'};

    for (int l = 0; l < sizeof(students) / sizeof(std::string); l++)
    {
        std::cout << students[l] << '\n';
    }

    for (int i = 0; i < sizeof(grades) / sizeof(char); i++)
    {
        std::cout << grades[i] << '\n';
    }

    // bit of practice

    int num[] = {1, 3, 4, 6};

    for (int k = 0; k < sizeof(num) / sizeof(num[0]); k++)
    {
        std::cout << num[k] << '\n';
    }

    return 0;
}