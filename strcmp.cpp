#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palavra1[50];
    char palavra2[50];
    int resultado;

    cout << "Entre com uma palavra: ";
    cin >> palavra1;

    cout << "Entre com outra palavra: ";
    cin >> palavra2;

    resultado = strcmp(palavra1, palavra2);

    if (resultado == 0)
    {
        cout << "As palavras são iguais." << endl;
    }
    else if (resultado < 0)
    {
        cout << "A primeira palavra é menor que a segunda." << endl;
    }
    else
    {
        cout << "A primeira palavra é maior que a segunda." << endl;
    }
    return 0;
}