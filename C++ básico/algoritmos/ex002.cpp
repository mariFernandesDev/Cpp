#include <iostream>
using namespace std;
int main(){
    int num;

    cin >> num;
    if (num % 2 == 0){
        cout << "É par! ";

    }
    if(num % 2 != 0){
        cout << "É impar ";
    }

    if (num > 0){
        cout << "e positivo\n";
    }
    if (num < 0){
        cout << "e negativo\n";
    }


return 0;
}
