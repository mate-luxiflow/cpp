#include <iostream>
#include <string>

using namespace std;

int main()
{
    // null value = a special value that means something has no value
    //               when a pointer is holding a null value,
    //               that pointer is not pointing at anything (nullpoint)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was succesfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;

    // pointer = &x;

    if (pointer == nullptr)
    {
        cout << "address was not assigned";
    }
    else
    {
        cout << "address was assigned\n";
        cout << *pointer;
    }

    return 0;
}