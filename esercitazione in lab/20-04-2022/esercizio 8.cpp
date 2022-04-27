/*

  Creare una funzione che restituisce se un numero intero ha almeno 3 divisori.

*/
#include <iostream>
using namespace std;

bool Divisore(int x){
    int NDivisori=0;
    for(int i=2; i<x; i++){
        if (x%i==0){
            NDivisori++;
        }
    }
    return (NDivisori>=3) ? true : false;
}

int main()
{
    int numero;
    cout<<"inserisci un numero e ti dirò se ha 3 divisori: ";
    cin>>numero;
    if (Divisori(numero)){
        cout<<"Il tuo numero ha 3 divisori.";
    } else {
        cout<<"Il tuo numero non ha 3 divisori.";
    }
    return 0;
}