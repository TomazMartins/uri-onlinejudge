#include <iostream>
#include <cstdlib>

int is_bigger_than(int value_A, int value_B)
{
    return (value_A + value_B + abs(value_A - value_B)) * 0.5;
}

int main()
{
    int value_A = 0;
    int value_B = 0;
    int value_C = 0;

    std::cin >> value_A >> value_B >> value_C;

    int is_bigger = is_bigger_than(value_A, is_bigger_than(value_B, value_C));

    std::cout << is_bigger << " eh o maior" << std::endl;
    return 0;
}
