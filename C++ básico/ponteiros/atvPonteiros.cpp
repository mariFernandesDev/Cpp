#include <iostream>
using namespace std;

int quadrado(int a){

    int quadrado = a * a;
    cout << "valor "<< a <<  endl;
    cout << "Quadrado de a = "<< quadrado << endl;


 return quadrado;

}
void quad(int &a){
    a = a * a;
    cout << "valor: "<< a <<  endl;
    cout << "valor trocado por referência de a: "<< a << endl;

}
int main(){
    int a;
    cin >> a;
    quadrado(a);
    quad(a);
    return 0;
}
