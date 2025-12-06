#include <iostream>
using namespace std;

int main(){
int valor;
bool ePar = false;
cin >> valor;
if(valor % 2 == 0){
    ePar = true;
    cout << ePar << endl;
}
else{
    cout << ePar << endl;
}
return 0;
}
