#include <iostream>
#include <iomanip>

#define AUTONOMY 12.0 // kilometers per liter

int main()
{
    int speed = 0;
    int time = 0;

    std::cin >> time >> speed;

    double consumption_fuel = speed * time * (1/AUTONOMY);

    std::cout << std::fixed << std::setprecision(3) << consumption_fuel << std::endl;

    return 0;
}
