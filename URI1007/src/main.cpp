#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    std::cin >> a >> b >> c >> d;

    int result = (a * b) - (c * d);

    std::cout << "DIFERENCA = " << result << std::endl;

    return 0;
}