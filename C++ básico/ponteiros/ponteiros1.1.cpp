#include <iostream>
using namespace std;

int main(){
//Escreva um programa que:
//Declare duas variáveis a e b.
//Crie dois ponteiros pa e pb que apontem para cada uma.
//Troque os valores de a e b usando apenas ponteiros.

int a = 2, b = 8, aux;
int *pa;
int *pb;
pa = &a;
pb = &b;
cout << a << " " << b << endl;

aux = *pa;
*pa = *pb;
*pb = aux;
cout << a << " " << b << endl;

return 0;
}
