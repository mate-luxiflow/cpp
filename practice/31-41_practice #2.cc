#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int searcharray(string array[], int size, string element);

int main()
{
    string items[8];
    int size = sizeof(items) / sizeof(items[0]);
    string myitem;

    fill(items, items + (size / 2), "supplies");
    fill(items + (size / 2), size + items, "empty");

    for (string item : items)
    {
        cout << item << " ";
    }
    cout << '\n';

    cout << "enter the word 'empty' to find the slots that is empty and can be filled ";
    getline(cin >> std::ws, myitem);

    int index;
    index = searcharray(items, size, myitem);

    if (index != -1)
    {
        cout << myitem << " is at index of " << index << '\n';

        string newitem;
        cout << "enter a name of a new item: ";
        getline(cin >> std::ws, newitem);

        items[index] = newitem;

        cout << "updated inventory: ";

        for (string item : items)
        {
            cout << item << " ";
        }
        cout << '\n';
    }
    else
    {
        cout << myitem << " is not in this array" << '\n';
    }

    return 0;
}
int searcharray(string array[], int size, string element)
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