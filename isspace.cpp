#include <iostream>
#include <ctype.h>
#include <cstring>

using namespace std;

int main()
{
    char frase[50] = "O rato roeu a roupa do rei de Roma";
    char frase_2[50] = "Anotaram a data da maratona";

    cout << "Frase 1 original: " << frase << endl;
    cout << "Frase 2 original: " << frase_2 << endl;

    strrev(frase);   // Inverte a frase
    strrev(frase_2); // Inverte a frase_2

    bool x;
    x = isalpha(frase[0]); // Verifica se o primeiro caractere da frase é uma letra
    cout << x;

    cout << "Frase 1 invertida: " << frase << endl;
    cout << "Frase 2 invertida: " << strupr(frase_2) << endl;

    return 0;
}