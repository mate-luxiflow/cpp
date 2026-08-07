#include <iostream>
#include <string>
#include <ctime>

int searcharray(int array[], int size, int element);
int searcharay(std::string aray[], int size, std::string element);

int main()
{
    int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(number) / sizeof(number[0]);
    int index;
    int mynum;

    std::string food[] = {"pizza", "hamburger", "hotdog"};
    int size2 = sizeof(food) / sizeof(food[0]);
    int indey;
    std::string myfood;

    std::cout << "enter an element to search for: ";
    std::cin >> mynum;

    std::cout << "enter a food to seach for: ";
    std::getline(std::cin >> std::ws, myfood);

    index = searcharray(number, size, mynum);
    indey = searcharay(food, size2, myfood);

    if (index != -1)
    {
        std::cout << mynum << " is at index " << index << '\n';
    }
    else
    {
        std::cout << mynum << " is not in the array\n";
    }

    if (indey != -1)
    {
        std::cout << myfood << " is at index " << indey;
    }
    else
    {
        std::cout << myfood << " is not in the array ";
    }

    return 0;
}
int searcharray(int array[], int size, int element)
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

int searcharay(std::string aray[], int size2, std::string element)
{
    for (int k = 0; k < size2; k++)
    {
        if (aray[k] == element)
        {
            return k;
        }
    }
    return -1;
}