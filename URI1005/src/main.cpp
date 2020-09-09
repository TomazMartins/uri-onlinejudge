#include <iostream>
#include <iomanip>

int main()
{
    double const WEIGHT_A = 3.5;
    double const WEIGHT_B = 7.5;

    double grade_A = 0;
    double grade_B = 0;

    std::cin >> grade_A;
    std::cin >> grade_B;

    double final_grade = ((grade_A * WEIGHT_A) + (grade_B * WEIGHT_B))/11;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(5) << final_grade << std::endl;

    return 0;
}