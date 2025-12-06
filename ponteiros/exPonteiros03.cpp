#include <iostream>
using namespace std;
//Exercício 3: Percorrendo um Vetor com Ponteiro

int main(){
    int vetor[5] = {10, 20, 30, 40, 50} ;
    int *pvetor = vetor;

    for(int i = 0 ; i < 5; i++){
        cout << *(pvetor + i)<< " ";
        //*(p_vetor + i) significa que eu estou pegando o valor do ponteiro e somando com o valor do índice,
        //isso ajuda a posição da memória a mudar de valor.
    }

return 0;
}
