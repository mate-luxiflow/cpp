#include <iostream>
#include <string>
#include <ctime>

void displayProfile(std::string username, std::string characterClass, int level);

int main()
{

    std::string username;
    std::string characterClass;
    int level;

    std::cout << "whats your username? ";
    std::cin >> username;
    std::cout << "whats your class? ";
    std::cin >> characterClass;
    std::cout << "whats your level? ";
    std::cin >> level;

    displayProfile(username, characterClass, level);

    return 0;
}

void displayProfile(std::string username, std::string characterClass, int level)
{
    std::cout << "================ \n";
    std::cout << "player: " << username << '\n';
    std::cout << "class: " << characterClass << '\n';
    std::cout << "level: " << level << '\n';
    std::cout << "================";
}