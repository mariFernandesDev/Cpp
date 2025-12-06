#include <iostream>
using namespace std;

//Função para troca com ponteiros

void trocar(int *a1, int *b1){
    int aux;
    aux = *a1;
    *a1 = *b1;
    *b1 = aux;
}
int main(){
    int a = 9, b = 7;
    cout << a << endl << b << endl;

    trocar(&a,&b);
    cout << a << endl << b << endl;


return 0;}
