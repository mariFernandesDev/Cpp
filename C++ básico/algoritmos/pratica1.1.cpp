#include <iostream>
using namespace std;
int main(){
char vogal[5] = {"a", "e", "i", "o", "u"};
string palavra, letra;
cin >> palavra;

for letra in palavra{
    for letra in vogal{
        cout << letra << " " << endl;
    }
}

return 0;
}
