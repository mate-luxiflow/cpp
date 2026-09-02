#include <iostream>
#include <string>

using namespace std;
int factorial(int num);
int main()
{
    cout << factorial(10) << '\n';

    return 0;
}
// iterative

/*int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result = result * i;
    }
    return 0;
}
*/

// recursive

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}