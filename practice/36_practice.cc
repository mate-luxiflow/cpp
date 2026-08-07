#include <iostream>
#include <string>
#include <ctime>

int seacharray(char array[], int size, char element);

int main()
{
    char grades[] = {'a', 'b', 'c', 'd', 'f'};
    int size = sizeof(grades) / sizeof(grades[0]);
    int index;
    char mygrade;

    std::cout << "enter a letter to search for (lower case only)";
    std::cin >> mygrade;

    index = seacharray(grades, size, mygrade);

    if (index != -1)
    {
        std::cout << mygrade << " is at the index of " << index;
    }
    else
    {
        std::cout << mygrade << " is not in this array";
    }

    return 0;
}
int seacharray(char array[], int size, char element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}