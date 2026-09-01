#include <iostream>
#include <string>

using namespace std;

void applyDiscount(double *price, double discount);

int main()
{
    double price = 1000.0;
    double *nullPtr = nullptr;

    applyDiscount(nullPtr, 0.15);

    applyDiscount(&price, 0.15);
    cout << "new laptop price: " << price << '\n';

    return 0;
}
void applyDiscount(double *price, double discount)
{
    if (price == nullptr)
    {
        cout << "invalid price pointer!\n";
    }
    else
    {
        *price = *price * (1 - discount);
    }
}