#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    // memory address = a location in memory where data is stored
    // a memory address can accessed eith & (address-of operator)

    string name = "mate";
    int age = 16;
    bool students = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &students << '\n';

    return 0;
}