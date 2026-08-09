#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    // fill() =  fills a range of elements with a specified value
    //          fill(begin,end,value)

    const int size = 99;
    string foods[size] = {};

    fill(foods, foods + (size / 3), "pizza");
    fill(foods + (size / 3), foods + (size / 3) * 2, "hamburger");
    fill(foods + (size / 3) * 2, foods + size, "hotdog");

    for (string food : foods)
    {
        cout << food << '\n';
    }

    return 0;
}