#include <iostream>
using namespace std;

int main(){
    int num, tabuada, i;
    cin >> num;

    for(i = 0; i <= 10; i++){
        tabuada = num * i;
        cout << num << " x " << i << " = " << tabuada << endl;
    }
    return 0;
}
