#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159

int main()
{
    double radius = 0;

    std::cin >> radius;

    double area = (4.0/3.0) * PI * pow(radius, 3);

    std::cout << std::fixed << std::setprecision(3) << "VOLUME = " << area << std::endl;
    return 0;
}