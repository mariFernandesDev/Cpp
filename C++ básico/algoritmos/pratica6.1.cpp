#include <iostream>
using namespace std;
//Ponteiros em C++
int main(){
    //Declarar a variável inicial
    int y = 100;
    //Declarar um ponteiro
    int *yPtr;
    //Vincular o ponteiro com a variável
    yPtr = &y;
    cout << y << endl;
    cout << &y << endl;//endereço na memória
    cout << yPtr << endl;//endereço na memória
    cout << *yPtr << endl;
    cout << &*yPtr << endl;//endereço na memória

    //alterando o conteúdo a partir da variavel
    y = 200;
    cout << *yPtr << endl;
    //alterando o conteúdo a partir do ponteiro
    *yPtr = 300;
    cout << y << endl;
return 0;
}
