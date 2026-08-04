//                      NUMBER 1
/*
#include <iostream>
#include <string>
#include <ctime>

void attack();
void attack(std::string weapon);
void attack(std::string weapon, int multiplier);

int main()
{

    std::string weapon;
    int multiplier;

    attack();
    attack("lasergun ");
    attack("lasergun ", 3);

    return 0;
}

void attack()
{
    std::cout << "you puncht the enemy for 5 demage\n";
}
void attack(std::string weapon)
{
    std::cout << "You strike with your " << weapon << " for 15 damage!\n";
}
void attack(std::string weapon, int multiplier)
{
    std::cout << "CRITICAL HIT! Your " << weapon << " more deals  damage! " << (15 * multiplier);
}

*/

//              NUMBER 2

/*

#include <iostream>
#include <string>
#include <ctime>

int calculatehp(int health, int armor);
std::string formattag(std::string clan, std::string name);

int main()
{

    std::string clan = "alma";
    std::string name = "mate";

    int health = 100;
    int armor = 100;

    int combined = calculatehp(health, armor);
    std::string fullTag = formattag(clan, name);

    std::cout << "total hp: " << combined << '\n';
    std::cout << "clan = " << clan << " username is: " << name << '\n';
    std::cout << "full name : " << fullTag << '\n';

    return 0;
}

int calculatehp(int health, int armor)
{
    int result = health + armor;
    return result;
}
std::string formattag(std::string clan, std::string name)
{
    return clan + " " + name;
}

*/

//              TASK 3

#include <iostream>
#include <string>
#include <ctime>

int totalgold = 5;

void printgold();

int main()
{

    int pocketgold = 3;

    printgold();

    std::cout << ::totalgold << '\n';
    std::cout << pocketgold << '\n';

    return 0;
}

void printgold()
{

    int walletgold = 4;
    std::cout << walletgold << '\n';
}