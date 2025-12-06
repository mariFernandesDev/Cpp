#include <iostream>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    int menor;
    if (x > y){
          cout << "valor y é menor "<< endl;
    }
    else{
          cout << menor << "valor x é menor"<< endl;
    }

    cout << &x << &y<< endl;
    if(&x > &y){
          cout << &y << "valor do endereço de y é menor: "<< endl;
    }
    else{
          cout << &x << "valor do endereço de x é menor: "<< endl;
    }

return 0;
}
