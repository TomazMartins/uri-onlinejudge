#include <iostream>
#include <iomanip>
#include <string>

int main()
{
    std::string seller_name;

    double const COMMISSION = 0.15;
    double sales_made = 0;
    double salary = 0;

    std::cin >> seller_name >> salary >> sales_made;

    double final_salary = salary + (sales_made * COMMISSION);

    std::cout << std::fixed << std::setprecision(2) << "TOTAL = R$ " <<  final_salary << std::endl;

    return 0;
}