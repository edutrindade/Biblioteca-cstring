#include <iostream>
#include <windows.h>
#include <cstring>
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    string nome = "Alice";
    string sobrenome = "Alice no Pais das Maravilhas";
    string busca;
    cout << "Pesquisa: ";
    getline(cin, busca); // getline() para pegar o \n também

    if(strstr(nome.c_str(), busca.c_str()) && nome.length() >= busca.length()) {
        cout << "Encontrou" << endl;
    } else {
        cout << "Nao Encontrou" << endl;
    }

    if(strstr(sobrenome.c_str(), busca.c_str()) && sobrenome.length() >= busca.length()) {
        cout << "Encontrou" << endl;
    } else {
        cout << "Nao Encontrou" << endl;
    }

    cout << endl;
    return 0;
}