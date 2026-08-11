#include <iostream>
#include <string>
#include <ctime>

using namespace std;

double getaverage(double array[], int size);
void sortdescending(double array[], int size);

int main()
{
    double array[5];
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        cout << "enter a grade " << i + 1 << "#: ";
        cin >> array[i];
    }

    cout << "your scores: \n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << '\n';

    cout << "descending order: ";

    sortdescending(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << '\n';
    cout << "highest score: " << array[0] << '\n';
    cout << "lowest score: " << array[size - 1] << '\n';

    cout << "average score: " << getaverage(array, size) << '\n';

    return 0;
}
double getaverage(double array[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }
    return total / size;
}
void sortdescending(double array[], int size)
{
    double temp;

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