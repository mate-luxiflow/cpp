#include <iostream>

int main(){

    //type conversion = conversion a value of one data type to another
    //                  implicit = automatic
    //                  explicit = precede value with new data type (int)

    //int x = (int) 3.14;

    //std::cout << x;

    //char y = 100;

    //std::cout << (char) 100;


    int correct = 8;
    int total = 10;
    double score = correct / (double)total * 100;

    std::cout << score << "%";

    return 0;
}
