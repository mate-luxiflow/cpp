#include <iostream>
#include <string>

int main()
{

    std::string name;

    std::cout << "enter your name: ";
    std::getline(std::cin, name);

    // length
    /*if (name.length() > 12)
    {
        std::cout << "your name cant be over 12 characters";
    }
    else
    {
        std::cout << "welcome " << name;
    }
        */

    // empty

    /*if(name.empty()){
        std::cout << "you didnt enter your name";
    }
    else{
        std::cout << "hello " << name;
    }
        */

    // clear

    /*name.clear();

    std::cout << "hello " << name;

        */

    // append

    /*name.append("@gmail.com");

    std::cout << "your username is " << name;
        */

    // at
    // std::cout << name.at(0);

    // insert
    /*name.insert(0, "@");

    std::cout << name;
*/

    // find
    // std::cout << name.find(' ');

    // erase

    name.erase(0, 3);

    std::cout << name;

    return 0;
}