#include <iostream>
using namespace std;
//Exercício 4: Função para Somar Elementos

int somarVetor(int *vetor1, int tamVetor){
    int soma = 0;
    for(int i = 0; i < tamVetor; i++){
        soma += vetor1[i];
    }
return soma;
}

int main(){
  int vetor[5]= {10, 20, 30, 40, 50};
  cout << somarVetor(vetor, 5) << endl;


return 0;
}
