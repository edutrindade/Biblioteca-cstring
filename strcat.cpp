#include <iostream>
#include <windows.h>
#include <cstring>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    char nome[50] = "João";
    char sobrenome[50] = " da Silva";

    strcat(nome, sobrenome); // Anexa o sobrenome ao vetor nome

    cout << nome << endl;
    return 0;
}