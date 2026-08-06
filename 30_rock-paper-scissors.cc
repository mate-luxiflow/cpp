#include <iostream>
#include <string>
#include <ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char player, char computer);

int main()
{
    char player;
    char computer;
    char playagain;

    do
    {
        player = getuserchoice();
        std::cout << "your choice: ";
        showchoice(player);

        computer = getcomputerchoice();
        std::cout << "computers choice: ";
        showchoice(computer);

        choosewinner(player, computer);

        std::cout << "wanna play again?(y/n)";
        std::cin >> playagain;
    } while (playagain == 'y' || playagain == 'Y');

    std::cout << "thanks for playing";

    return 0;
}

char getuserchoice()
{
    char player;
    std::cout << "rock paper scissors game\n";

    do
    {
        std::cout << "choose one of the following\n";
        std::cout << " 'r' for rock\n";
        std::cout << " 'p' for paper\n";
        std::cout << " 's' for scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char getcomputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void showchoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "rock\n";
        break;
    case 'p':
        std::cout << "paper\n";
        break;
    case 's':
        std::cout << "scissorc\n";
        break;
    }
}
void choosewinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "its a tie\n";
        }
        else if (computer == 'p')
        {
            std::cout << "you lose\n";
        }
        else
        {
            std::cout << "you win\n";
        }
        break;

    case 'p':
        if (computer == 'r')
        {
            std::cout << "you win\n";
        }
        else if (computer == 'p')
        {
            std::cout << "its a tie\n";
        }
        else
        {
            std::cout << "you lose\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "you lose\n";
        }
        else if (computer == 'p')
        {
            std::cout << "you win!\n";
        }
        else
        {
            std::cout << "its a tie!\n";
        }
        break;
    }
}