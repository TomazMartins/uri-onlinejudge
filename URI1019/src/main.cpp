#include <iostream>

#define HOUR 3600
#define MINUTE 60

int main()
{
    int seconds = 0;
    int minutes = 0;
    int hours = 0;

    std::cin >> seconds;

    while(seconds / HOUR != 0)
    {
        seconds -= HOUR;
        hours++;
    }

    while(seconds / MINUTE != 0)
    {
        seconds -= MINUTE;
        minutes++;
    }

    std::cout << hours << ':' << minutes << ':' << seconds << std::endl;
    return 0;
}