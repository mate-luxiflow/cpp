#include <iostream>
#include <string>

enum flavor
{
    mango,   // 0
    vanilla, // 1
    csoki,   // 2
    keksz    // 3
};

int main()
{
    flavor flavor = keksz;

    switch (flavor)
    {
    case 0:
        std::cout << "its mangooo\n";
        break;
    case 1:
        std::cout << "its vanillaaaa\n";
        break;
    case 2:
        std::cout << "its csokiiii\n";
        break;
    case 3:
        std::cout << "its kekszzzz\n";
        break;
    }

    return 0;
}