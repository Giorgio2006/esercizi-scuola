#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"insersci un numero e ti dirò se è pari o dispari";
    cin>>numero;
    if (numero%2==0){
        cout<<"il numero è pari";
    }
    else {
        cout<<"il numero è dispari";
    }
    return 0;
}
