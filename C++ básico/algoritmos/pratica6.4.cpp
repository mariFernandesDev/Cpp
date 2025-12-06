#include <iostream>
using namespace std;

//Não tô entendendo nadaa
//Procedimento de troca

void dobrar(int *x){
    *x = *x * 2;
}
int main(){
 int a = 10;
 int b = 38;
 cout << "A = "<< a << endl;
 cout << "B = "<< b << endl;

 dobrar(&a);
 dobrar(&b);

 cout <<"valor dobrado..\n";
 cout << "A = "<< a << endl;
 cout << "B = "<< b << endl;

return 0;
}
