#include <iostream>
using namespace std;

int main(){
    int a, b, c, maior, menor;
    cin >> a >> b >> c;
    if ( a > b && a > c){
        maior = a;
        if (b > c
            ){
            menor = c;
        }
        else{
            menor = b;
        }
    }
     if ( b > a && b > c){
        maior = b;
        if (a > c){
            menor = c;
        }
        else{
            menor = a;
        }
    }
    if (c > a && c > b){
        maior = c;
        if (b > a){
            menor = a;
        }
        else{
            menor = b;
        }
    }

    cout << "Maior: " << maior << " Menor: " << menor << endl;

return 0;
}
