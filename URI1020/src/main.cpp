#include <iostream>

#define YEAR 365
#define MONTH 30

int main()
{
    int months = 0;
    int years = 0;
    int days = 0;

    std::cin >> days;

    while(days / YEAR != 0)
    {
        days -= YEAR;
        years++;
    }

    while(days / MONTH != 0)
    {
        days -= MONTH;
        months++;
    }

    std::cout << years  << " ano(s)"  << std::endl
              << months << " mes(es)" << std::endl
              << days   << " dia(s)"  << std::endl
    ;

    return 0;
}