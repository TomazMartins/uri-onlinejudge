#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.14159

int main()
{
    double measure_A = 0;
    double measure_B = 0;
    double measure_C = 0;

    std::cin >> measure_A >> measure_B >> measure_C;

    double trapeze_area = 0.5 * (measure_A + measure_B) * measure_C; 
    double triangle_area = 0.5 * measure_A * measure_C;
    double rectangle_area = measure_A * measure_B;
    double circle_area =  PI * pow(measure_C, 2);
    double square_area = pow(measure_B, 2);

    std::cout << std::fixed << std::setprecision(3)
              << "TRIANGULO: " << triangle_area  << std::endl
              << "CIRCULO: "   << circle_area    << std::endl
              << "TRAPEZIO: "  << trapeze_area   << std::endl
              << "QUADRADO: "  << square_area    << std::endl
              << "RETANGULO: " << rectangle_area
    << std::endl;

    return 0;
}
