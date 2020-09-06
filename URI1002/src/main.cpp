#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    const double PI = 3.14159;

    double radius = 0;
    std::cin >> radius;

    double area = PI * pow(radius, 2);

    std::cout << "A=" << std::fixed << std::setprecision(4) << area << std::endl;

    return 0;
}