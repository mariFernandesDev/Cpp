#include <iostream>
using namespace std;

//Não tô entendendo nadaa
//Procedimento de troca

void troca(int *x, int *y){

    int aux = *x;
    *x = *y;
    *y = aux;
}
int main(){
 int a = 10;
 int b = 20;

 cout <<"valores iniciais..\n";
 cout << "A = "<< a << endl;
 cout << "B = "<< b << endl;
 troca(&a,&b);

 cout <<"valores trocados..\n";
 cout << "A = "<< a << endl;
 cout << "B = "<< b << endl;
return 0;
}
