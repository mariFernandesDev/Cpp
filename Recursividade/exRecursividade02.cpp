#include <iostream>
using namespace std;
//Recursividade
//Números de Catalan
int C(int n) {
	if (n == 0) {
		return 1;
	}
	return (2 * (2 * n - 1) * C(n - 1))/ (n + 1);
}
int main() {
	cout << "Catalan de 3 : " << C(3) << endl;
	cout << "Catalan de 4 : " << C(4) << endl;
	cout << "Catalan de 8 : " << C(8) << endl;
	cout << "Catalan de 10 : " << C(10) << endl;

	return 0;
}
