#include <iostream>
#include <iomanip>

int main()
{
    double spent_fuel = 0;
    double distance = 0;

    std::cin >> distance >> spent_fuel;

    double consumption_fuel = distance / spent_fuel;

    std::cout << std::fixed << std::setprecision(3)
              << consumption_fuel << " km/l"
    << std::endl;

    return 0;
}
