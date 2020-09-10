#include <iostream>
#include <iomanip>

int main()
{
    double salary_by_hour = 0;
    int worked_hours = 0;
    int employee_id = 0;

    std::cin >> employee_id >> worked_hours >> salary_by_hour;

    double total_salary = worked_hours * salary_by_hour;

    std::cout << "NUMBER = " << employee_id << std::endl
              << std::fixed << std::setprecision(2)
              << "SALARY = U$ " <<  total_salary << std::endl
    ;

    return 0;
}