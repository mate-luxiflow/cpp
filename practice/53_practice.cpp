#include <iostream>
#include <string>

struct weapon
{
    int pattern;
    std::string color;
    std::string name;
};

void printWeapon(weapon &weapon);
void paintWeapon(weapon &weapon, int pattern);

int main()
{
    weapon weapon1;
    weapon weapon2;

    weapon1.pattern = 1234;
    weapon1.color = "red";
    weapon1.name = "vandal";

    weapon2.pattern = 4567;
    weapon2.color = "green";
    weapon2.name = "sherrif";

    paintWeapon(weapon1, 5463);
    paintWeapon(weapon2, 9231);

    printWeapon(weapon1);
    printWeapon(weapon2);

    return 0;
}
void printWeapon(weapon &weapon)
{
    std::cout << &weapon << '\n';
    std::cout << weapon.name << '\n';
    std::cout << weapon.color << '\n';
    std::cout << weapon.pattern << '\n';
}
void paintWeapon(weapon &weapon, int pattern)
{
    weapon.pattern = pattern;
}
