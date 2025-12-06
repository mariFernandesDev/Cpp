#include <iostream>
using namespace std;
//sequencia de fibonacci
int main(){
    int n, n1 = 0, n2 = 1, i = 0, fibonacci;
    cin >> n;

    while(i <= n - 1){
        cout << n1 << " ";
        fibonacci = n1 + n2;
        n1 = n2;
        n2 = fibonacci;
        i++;

    }

    //Começa com os valores 0 e 1, faz a soma dos dois e com o resultado soma ao algarismo anterior.

return 0;
}
