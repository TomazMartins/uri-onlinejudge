#include <iostream>
#include <iomanip>

#define SIZE 2

struct Product { double price; int quantity; int code; };

int main()
{
    Product products[SIZE];
    double total = 0;

    for(int i = 0; i < SIZE; i++)
    {
        std::cin >> products[i].code >> products[i].quantity >> products[i].price;
    }

    for(int i = 0; i < SIZE; i++) { total += products[i].quantity * products[i].price; }

    std::cout << std::fixed << std::setprecision(2) << "VALOR A PAGAR: R$ " << total << std::endl;
    return 0;
}