#include <iostream>
#include <list>
//Exercício 5: Alocação Dinâmica de Memória
//Peça ao usuário para digitar um número inteiro N.
//Crie um vetor de N elementos do tipo float dinamicamente na memória usando o operador new.
//Peça ao usuário para preencher esse vetor.
//Calcule a média dos valores no vetor.
//Imprima a média.

//Muito importante: Libere a memória alocada usando o operador delete[].
int main(){
    int n;
    float  soma = 0, media;
    cout << "Qtd de números do vetor: "<< endl;
    cin >> n;

    float *vetor = new float[n]; //o operador new reserva esse novo espaço de memória para o ponteiro
    //Aqui estou declarando um ponteiro que irá apontar para um 'vetor'
    //(na realidade para um grande espaço de memória alocada temporariamente do tamanho da variável n) .

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

     for(int i = 0; i < n; i++){
        soma += vetor[i];
    }
    media = soma / n;

    cout << "Média: " << media << endl;
    //Liberandi a memória

    delete[] vetor;// estamos devolvendo o espaço alocado na memória
return 0;
}
