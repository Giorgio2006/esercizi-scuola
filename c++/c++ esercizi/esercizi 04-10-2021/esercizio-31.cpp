#include <iostream>
using namespace std;
int main()
{
    int  numero;
    cout<<"inserisci un numero e ti dirò se pari o dispari"<<endl;
    cin>>numero;
    if (numero%2==0)
    {
        cout<<"numero pari";
    } else
    {
        cout<<"numero dispari";
    }
    return 0;
}