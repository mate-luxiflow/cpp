#include <iostream>
#include <string>

class stove
{
private:
    int temperature = 0;

public:
    stove(int temperature)
    {
        setTemperature(temperature);
    }
    int getTemperature()
    {
        return temperature;
    }
    void setTemperature(int temperature)
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{
    // abstraction = hiding unnecessary data from outside a class
    //  getter = function that makes a private attribute READABLE
    //  setter = function that makes a private attribute WRITEABLE

    stove stove(7);

    // stove.temperature = 100000;
    // stove.setTemperature(30);

    std::cout << "the temperature setting is: " << stove.getTemperature() << '\n';

    return 0;
}