#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int getidigit(const int number);
int sumoddDigits(const string &cardnumber);
int sumevenDigits(const string &cardnumber);

int main()
{
    string cardnumber;
    int result = 0;

    cout << "enter a credit card number: ";
    cin >> cardnumber;

    result = sumoddDigits(cardnumber) + sumevenDigits(cardnumber);

    if (result % 10 == 0)
    {
        cout << "card number is valid";
    }
    else
    {
        cout << "card number is not valid";
    }

    return 0;
}
int getidigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}
int sumoddDigits(const string &cardnumber)
{
    int sum = 0;

    for (int i = cardnumber.size() - 1; i >= 0; i -= 2)
    {
        sum += getidigit(cardnumber[i] - '0');
    }

    return sum;
}
int sumevenDigits(const string &cardnumber)
{
    int sum = 0;

    for (int i = cardnumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getidigit((cardnumber[i] - '0') * 2);
    }

    return sum;
}