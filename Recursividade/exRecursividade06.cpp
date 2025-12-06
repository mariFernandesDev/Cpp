#include <iostream>
using namespace std;
//Recursividade
//MDC | Exercício 3
//mdc de forma iterativa
int main(){
    int mdc = 1, x = 12, y = 4;
        if (y != 0 && y > 0) {
            for (int i = min(x,y); i >= 1; i--) {
                if (x % i == 0 && y % i == 0) {
                mdc = i;
                break;
		}
	}
}
cout << "MDC entre " << x << " e " << y << ": " << mdc << endl;
}
