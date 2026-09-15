#include <iostream>
#include <string>

class speaker
{
private:
    int volume = 0;

public:
    speaker(int volume)
    {
        setVolume(volume);
    }
    int getVolume()
    {
        return volume;
    }
    void setVolume(int volume)
    {
        if (volume < 0)
        {
            this->volume = 0;
        }
        else if (volume >= 100)
        {
            this->volume = 100;
        }
        else
        {
            this->volume = volume;
        }
    }
};

int main()
{
    speaker speaker(-20);

    std::cout << "the volume currently is: " << speaker.getVolume() << '\n';

    return 0;
}