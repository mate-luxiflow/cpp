#include <iostream>
#include <string>
#include <ctime>

using namespace std;

void swap(string &x, string &y);

int main()
{
    string x = "kool";
    string y = "water";

    /*
    string temp;

    temp = x;
    x = y;
    y = temp;
    */

    swap(x, y);

    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';

    return 0;
}
void swap(string &x, string &y)
{
    string temp;
    temp = x;
    x = y;
    y = temp;
}