#include <iostream>
#include <string>

template <typename T, typename U>

auto min(T x, U y)
{
    return (x < y) ? x : y;
}

int main()
{
    std::cout << min(3.1, 2.5) << '\n';

    return 0;
}