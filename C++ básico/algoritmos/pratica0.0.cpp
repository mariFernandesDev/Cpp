#include <iostream>
using namespace std;

int main(){
int soma = 0, media, valor;
for(int i=0; i < 10; i++){
    cin >> valor;
    soma += valor;
}
media = soma / 10;
cout << "Soma: " << soma << endl;
cout << "Média: " << media << endl;
return 0;
}
