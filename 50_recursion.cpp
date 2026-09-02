#include <iostream>
#include <string>

using namespace std;

void walk(int steps);

int main()
{
    // recursion = a programming technique where a function
    //             invokes itself from within
    //             break a complex concept into a repeatable single step

    // iterative vs recursive

    // advantages = less code and is cleaner
    //              useful for sorting an searching algorithms

    // disadvantages = uses more memory
    //               slower

    walk(100);

    return 0;
}
/*void walk(int steps)
{
    for (int i = 0; i < steps; i++)
    {
        cout << "you take a step\n";
    }
}
*/

void walk(int steps)
{
    if (steps > 0)
    {
        cout << "you take a step\n";
        walk(steps - 1);
    }
}