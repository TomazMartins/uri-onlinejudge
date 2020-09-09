#include <iostream>

int main()
{
    int parcel_A = 0;
    int parcel_B = 0;

    std::cin >> parcel_A;
    std::cin >> parcel_B;

    int sum = parcel_A + parcel_B;

    std::cout << "SOMA = " << sum << std::endl;

    return 0;
}