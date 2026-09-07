#include <iostream>
#include <string>
#include <ctime>

int mynum = 3;

void printnum();

int main()
{
    // local variables = declared inside a function or block {}
    // global variables = declared outside of all functions

    int mynum = 1;

    printnum();

    std::cout << ::mynum << '\n';

    return 0;
}
void printnum()
{
    int mynum = 2;
    std::cout << ::mynum << '\n';
}