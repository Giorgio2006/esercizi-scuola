/*

 Creare una funzione che calcola e restituisce il valore assoluto
 di un numero intero.

*/
#include <iostream>
using namespace std;

int valAssoluto(int n)
{
    if(n<0)
    {
        n=-n;
    }
    return n;
}

int main()
{
    int a;
    cout<<"inserisci un numero ";
    cin>>a;
    cout<<" il suo valore assoluto e' "<<valAssoluto(a);

    return 0;
}