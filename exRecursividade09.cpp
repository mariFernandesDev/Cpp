#include <iostream>
using namespace std;
//Recursividade
//Soma dos primeiros n números

int somaAteN(int n) {
	if (n == 0) {
		return 0;
	}
	return n + somaAteN(n - 1);

	//Teste de Mesa
	//n == 5 . N é igual a 0? Não, então retornamos o N  e chamamos novamente a função passando n - 1
}
int main() {
	cout << somaAteN(10);
}
