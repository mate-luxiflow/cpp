#include <iostream>
#include <string>

using namespace std;

void doubleVal(int n);
void doubleRef(int &n);
void doublePtr(int *n);

int main()
{
    int score = 10;

    doubleVal(score);
    cout << "after doubleval: " << score << '\n';

    doubleRef(score);
    cout << "after doubleref: " << score << '\n';

    doublePtr(&score);
    cout << "after doubleptr: " << score << '\n';

    return 0;
}
void doubleVal(int n)
{
    n = n * 2;
}
void doubleRef(int &n)
{
    n = n * 2;
}
void doublePtr(int *n)
{
    *n = *n * 2;
}