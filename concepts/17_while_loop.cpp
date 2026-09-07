#include <iostream>
#include <string>

int main()
{

    std::string name;

    /* while (name.empty())
     {
         std::cout << "enter your name: ";
         std::getline(std::cin, name);
     }

     std::cout << "hello " << name;
 */
    // infinite loop:
    /*while (1 == 1)
    {
        std::cout << "help";
    }
*/
    // practice

    while (name != "mate")
    {
        std::cout << "enter your name(theres only 1 correct): ";
        std::getline(std::cin, name);
        if (name == "mate")
        {
            std::cout << "welcome king";
        }
    }

    //      better version

    while (name != "mate")
    {
        std::cout << "enter your name (only 1 correct):";
        std::getline(std::cin, name);
    }
    std::cout << "welcome king\n";

    return 0;
}