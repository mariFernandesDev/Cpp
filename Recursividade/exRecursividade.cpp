#include <iostream>
using namespace std;

//Recursividade | Exemplo Fatorial
int fatorial(int n) {
    //Chamada recursiva
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    //Exemplo tradicional de como fazer o fatorial
    int n, fat = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    cout << "Fatorial de: " << n << " é : " << fat << endl;
    cout << "Fatorial por recursividade de: " << n << " é: " << fatorial(n) << endl;
    return 0;
}
