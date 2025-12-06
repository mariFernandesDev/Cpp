#include <iostream>
using namespace std;

void vetorler(int vetor[], int tvetor) {
    for (int i = 0; i < tvetor; i++) {
        cin >> vetor[i];
    }
}

void vetormostrar(int vetor[], int tvetor) {
    for (int i = 0; i < tvetor; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

void vetorinverter(int vetor[], int tvetor) {
    for (int i = 0; i < tvetor/2; i++) {
        int aux = vetor[i];
        vetor[i] = vetor[tvetor - 1 - i];
        vetor[tvetor - 1 - i] = aux;
    }
}

int main() {
    int tamanho = 5;
    int cvetor[tamanho];

    vetorler(cvetor, tamanho);
    cout << "Vetor original: ";
    vetormostrar(cvetor, tamanho);

    vetorinverter(cvetor, tamanho);

    cout << "Vetor invertido: ";
    vetormostrar(cvetor, tamanho);

    return 0;
}
