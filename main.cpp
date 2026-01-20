#include <iostream>
using namespace std;

int inicio();
void menu();

int main()
{

    int valor = inicio();
    menu();

    int escolha;
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        cout << "Valor atual: " << valor << "\n";
        break;

    case 2:
        valor = valor * 2;
        cout << "Valor atual: " << valor << "\n";
        break;

    case 3:
        valor = valor / 2;
        cout << "Valor atual: " << valor << "\n";
        break;

    default:
        cout << "Programa encerrado com sucesso\n";
    }
    return 0;
}

int inicio()
{
    cout << "Indique seu numero:\n";
    int num;
    cin >> num;

    return num;
}

void menu()
{
    cout << "O que deseja fazer?\n"
         << "0 - Encerrar o programa\n"
         << "1 - Visualizar o numero\n"
         << "2 - Multiplicar o numero por dois\n"
         << "3 - Dividir o numero por dois\n"
         << "-------------------------------\n";
}
