#include <iostream>
#include <string>

int main()
{

    // do while loop = do some block of code first
    //               then repeat again if condition is true

    /*int num;

    do
    {
        std::cout << "enter a positive number: ";
        std::cin >> num;
    } while (num < 0);

    std::cout << "the # is: " << num;
*/
    // practice

    char play;
    int num1;

    do
    {
        std::cout << "type a number";
        std::cin >> num1;
        std::cout << "your number is " << num1 << '\n';
        std::cout << "do you wanna play again? (y/n) \n";
        std::cin >> play;

    } while (play == 'y' || 'Y');

    std::cout << "goodbye";

    // og idea
    char input;
    bool keepplaying;
    int num2;

    do
    {
        std::cout << "type a number: ";
        std::cin >> num2;
        std::cout << "your number is: " << num2 << '\n';

        std::cout << "do oyu wanna play again? (y/n)\n";
        std::cin >> input;
        keepplaying = (input == 'y' || input == 'Y');

    } while (keepplaying);

    std::cout << "goodbye";

    return 0;
}