#include <iostream>

int main()
{
    int factor_A = 0;
    int factor_B = 0;

    std::cin >> factor_A;
    std::cin >> factor_B;

    int product = factor_A * factor_B;

    std::cout << "PROD = " << product << std::endl;

    return 0;
}