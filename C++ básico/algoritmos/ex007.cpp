#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num < 2){
        cout << "Não é primo";
    }
    else{
        for (int i = 2; i <= num; i++){
            if (num % i == 0){
                cout << "Não é primo";
                break;
            }
        }
        cout << "É primo";
    }

    return 0;
}
