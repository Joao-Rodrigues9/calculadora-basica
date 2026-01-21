#include <iostream>
int main()
{
    char tipoAtual;
    char tipoDesejado;

    std::cout << "Deseja converter a temperatura como?";
    std::cout << "De:";

    std::cin >> tipoAtual;

    std::cout << "Para:";

    std::cin >> tipoDesejado;

    return 0;
}