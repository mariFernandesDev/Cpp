#include <iostream>
using namespace std;

int main(){
 int x, y, i;

 cin >> x >> y;
 cout << "Escolha a operação matemática: 1 - soma, 2 subtração, 3 multiplicação, 4 - divisão\n" ;
 cin >> i;
 int operacao, soma = x + y, subtracao = x - y, multiplicacao = x * y, divisao = x / y;

 if (i == 1){
    operacao = soma;
 }
 else if(i == 2){
    operacao = subtracao;
 }
 else if(i == 3){
    operacao = multiplicacao;
 }
 else if(i == 4){
    operacao = divisao;
 }
 cout << "O resultado da operação entre " << x << " e " << y << " e: "  << operacao << endl ;


return 0;
}
