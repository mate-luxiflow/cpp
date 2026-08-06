#include <iostream>
#include <string>
#include <ctime>

double gettotal(double prices[], int size);
int gettotal2(int nums[], int size2);

int main()
{
    double prices[] = {49.99, 30.53, 67.09};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = gettotal(prices, size);

    int nums[] = {5, 4, 32, 13, 56};
    int size2 = sizeof(nums) / sizeof(nums[0]);
    int total2 = gettotal2(nums, size2);

    std::cout << "$" << total << '\n';
    std::cout << total2;

    return 0;
}
double gettotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}

int gettotal2(int nums[], int size2)
{
    int total2 = 0;

    for (int k = 0; k < size2; k++)
    {
        total2 += nums[k];
    }
    return total2;
}