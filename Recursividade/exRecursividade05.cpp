#include <iostream>
using namespace std;
//Recursividade
//MDC | Exercício 3

//o mdc é o maior número que consegue fazer uma divisão inteira entre dois valores
//se o número não for encontrado o mdc é 1, se o número existir ele é menor ou igual ao menor número entre os dois valores

int mdc(int x, int y) {
	if (y <= x && x % y == 0) {
		return y;
	}
	if (x < y) {
		return mdc(y, x);
	}
	return mdc(y, x % y);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << "MDC entre "<< a << " e "<< b << ": "<< mdc(a, b);
}
