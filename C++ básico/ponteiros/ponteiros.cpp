#include <iostream>
using namespace std;

int main(){

//🌱 Nível 1 — Fundamentos
//Crie um programa que:
//Declare uma variável int x = 10;
//Crie um ponteiro p que aponte para x.
//Imprima o valor de x e o valor acessado via ponteiro (*p).
//Modifique o valor de x usando o ponteiro (*p = 20;) e exiba novamente.

    int x = 10;
    int *ponteirox;
    ponteirox = &x;
    cout << x << endl;
    cout << *ponteirox << endl;
    *ponteirox = 20; //mudando o valor da variável pelo ponteiro.
    cout << x << endl;
    cout << ponteirox << endl;
return 0;
}
