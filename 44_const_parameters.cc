#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void printinfo(const string name, const int age);

int main()
{
    // cont parameter = parameter that is effectgively read-only
    //                  code is more secure & conveys intent
    //                  useful for references and pointers

    string name = "mate";
    int age = 16;

    printinfo(name, age);

    return 0;
}
void printinfo(const string name, const int age)
{
    // name = " ";
    // age = 0;
    cout << name << '\n';
    cout << age << '\n';
}