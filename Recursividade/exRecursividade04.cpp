#include <iostream>
using namespace std;
//Recursividade
//Números de Pell


int numPell(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	return 2 * numPell(n - 1) + numPell(n - 2);
}
int main() {
	cout << "Números de Pell:\n";
	cout << "Para n = 3: " << numPell(3) << endl;
	cout << "Para n = 5: " << numPell(5) << endl;
	cout << "Para n = 8: " << numPell(8) << endl;
	cout << "Para n = 9: " << numPell(9) << endl;
}
