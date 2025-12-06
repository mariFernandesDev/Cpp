#include <iostream>
using namespace std;
//Recursividade
int potencia(int base, int expoente) {
	if (base == 1) {
		return 1;
	}
	if (expoente == 1) {
		return base;
	}
	return base * potencia(base, expoente - 1);
}
int main() {
	cout << potencia(2, 3);
}
