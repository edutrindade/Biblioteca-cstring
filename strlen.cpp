#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char nome[50];
    int comprimento;

    cout << "Digite seu nome: ";
    cin.getline(nome, 50);

    comprimento = strlen(nome);

    cout << "Seu nome tem " << comprimento << " caracteres." << endl;
    return 0;
}