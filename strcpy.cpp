#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palavra[50], palavra_copiada[50];

    cout << "Entre com uma palavra: ";
    cin >> palavra;

    strcpy(palavra_copiada, palavra); // Copia o conteúdo de palavra para palavra_copiada

    cout << "Você digitou: " << palavra_copiada << endl;

    return 0;
}