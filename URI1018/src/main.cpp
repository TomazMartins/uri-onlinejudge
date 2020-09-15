#include <iostream>
#include <cstdlib>

#define SIZE 7

int main()
{
    int bank_notes[SIZE] = { 100, 50, 20, 10, 5, 2, 1 };

    int value = 0;

    std::cin >> value;

    std::cout << value << std::endl;

    for(int i = 0; i < SIZE; i++)
    {
        div_t result = div(value, bank_notes[i]);
        int qtd_notes = 0;

        if(result.quot > 0) { qtd_notes = result.quot; }

        std::cout << qtd_notes << " nota(s) de R$ " << bank_notes[i] << ",00" << std::endl;

        value -= result.quot * bank_notes[i];
    }

    return 0;
}