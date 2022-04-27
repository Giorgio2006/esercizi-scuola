/*

  Creare una funzione che restituisce se un numero intero è naturale o meno

*/
#include <iostream>
using namespace std;

void NReale(int numero){
    if (numero>=0){
        cout<<"E' un numero reale.";
    }
    else {
        cout<<"Non è un numero reale.";
    }
}

int main()
{
    int cifra;
    cout<<"Inserisci un numero: ";
    cin>>cifra;
    NReale(cifra);
    return 0;
}