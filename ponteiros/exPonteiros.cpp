#include <iostream>
using namespace std;

int main(){
    int valor = 10;
    int *ptr;
    ptr = &valor;


    cout << valor << endl;
    cout << &valor << endl;
    cout << *ptr << endl;
    cout << ptr;


return 0;
}
