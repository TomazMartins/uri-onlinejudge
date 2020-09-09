#include <iostream>
#include <iomanip>

int main()
{
    double const WEIGHT_A = 2.0;
    double const WEIGHT_B = 3.0;
    double const WEIGHT_C = 5.0;

    double grade_A = 0;
    double grade_B = 0;
    double grade_C = 0;

    std::cin >> grade_A;
    std::cin >> grade_B;
    std::cin >> grade_C;

    double sum_grades = ((grade_A * WEIGHT_A) + (grade_B * WEIGHT_B) + (grade_C * WEIGHT_C));
    double sum_weights = WEIGHT_A + WEIGHT_B + WEIGHT_C;
    double final_grade = sum_grades / sum_weights;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << final_grade << std::endl;

    return 0;
}