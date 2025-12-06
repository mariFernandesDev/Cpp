#include <iostream>
using namespace std;

int main(){
int valor, maior = 0, menor = 1;

for(int i = 0; i < 5; i++){
    cin >> valor;
    if(maior < valor){
        maior = valor;
    }
    if(menor > valor){
        menor = valor;
    }
}
cout << "Maior: " << maior << endl;
cout << "Menor: " << menor << endl;
return 0;
}
