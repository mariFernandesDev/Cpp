#include <iostream>
using namespace std;
//Exercício 2: Alterando Valores com Ponteiros

int main(){
 double num1, num2;
 cin >> num1 >> num2;

 double *p_maior;
 if (num1 > num2){
    p_maior = &num1;
 }
 else{
    p_maior = &num2;
 }

 *p_maior = *p_maior + 10;

 cout << num1 << endl;
 cout << num2 << endl;

return 0;
}
