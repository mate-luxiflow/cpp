#include <iostream>
#include <string>

using namespace std;

int main()
{
    // pointers = variable that stores a memory address of another variable
    //          sometimes its easier to work with an address

    //& address-of operator
    //* dereference operator

    string name = "bro";
    int age = 16;
    string freepizza[5] = {"pizza1", "piiza2", "pizza3", "pizza4", "pizza5"};
    int ages[3] = {16, 15, 13};

    string *pName = &name;
    int *pAge = &age;
    string *pfree = freepizza;
    int *pAges = ages;

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *freepizza << '\n';
    cout << *ages << '\n';

    return 0;
}