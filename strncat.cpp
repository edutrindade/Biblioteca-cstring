#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[20];
    char str2[20];
    strcpy(str1, "To be ");       // Armazena "To be " em str1
    strcpy(str2, "or not to be"); // Armazena "or not to be" em str2
    strncat(str1, str2, 6);       // Anexa o conteúdo de str2 ao final de str1, até o 6º caractere
    cout << str1 << endl;         // Imprime "To be or not"
    return 0;
}