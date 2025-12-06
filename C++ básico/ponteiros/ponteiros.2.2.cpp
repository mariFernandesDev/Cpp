#include <iostream>
using namespace std;

int main(){
//Peça ao usuário 5 números inteiros e armazene num vetor.
//Use um ponteiro para percorrer o vetor e:
//Exiba todos os elementos.
//Calcule a soma.
//Mostre o maior valor.

int vetor[5]; int *pv; int soma = 0;
int maior = *pv;
for(int i = 0; i < 5; i++){
    cin >> vetor[i];
}
pv = vetor;

for(int i = 0; i < 6; i++){
    cout << "Elemento: "<< i + 1 << *(pv + i) << endl;
        soma += *(pv + i);

        if (maior < *(pv + i)){
            maior = *(pv + i);
        }
}
cout << "Soma dos Elementos: "<< soma << endl;
cout << "Maior valor: "<< maior << endl;
return 0;
}
