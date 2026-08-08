#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void sortascending(char array[], int size);
void sortdescending(char array[], int size);

int main()
{
    char array[] = {'q', 'm', 'a', 'x', 'e', 'l', 't', 'c', 'o', 'u', 'i', 'z', 'g', 'w', 'v', 'f', 'y', 'b', 'r', 'p', 'd', 's', 'n', 'k', 'j', 'h'};
    int size = sizeof(array) / sizeof(array[0]);

    sortascending(array, size);
    cout << "ascending: ";
    for (char element : array)
    {
        cout << element << " ";
    }
    cout << '\n';

    sortdescending(array, size);
    cout << "descending: ";
    for (char element : array)
    {
        cout << element << " ";
    }
    cout << '\n';

    return 0;
}
void sortascending(char array[], int size)
{
    char temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
void sortdescending(char array[], int size)
{
    char temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
