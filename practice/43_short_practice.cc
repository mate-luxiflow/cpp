#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    int x = 10;
    int y = 100;

    swap(x, y);

    cout << "x: " << x << '\n';
    cout << "y: " << y;

    return 0;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}