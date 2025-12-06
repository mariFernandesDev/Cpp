#include <iostream>
using namespace std;
//Recursividade
//Contagem Regressiva

//Chamada tradicional
void contagemRegressiva(int n) {
	for (int i = n; i > 0; i--) {
		cout << i << " ";
	}
	cout << endl;
}

//Chamada Recursiva
int contRegressiva(int n) {
	//Caso base
	if (n == 1) {
		return n;
	}
	cout << n << endl;
	return contRegressiva(n - 1);


	//Teste de Mesa
	//n == 5 : n é igual a 1? não, então imprimimos o n e chamamos novamente a função passando n - 1. Agora n == 4.
}

int main() {
	contagemRegressiva(5);
	cout << contRegressiva(5);
	return 0;
}
