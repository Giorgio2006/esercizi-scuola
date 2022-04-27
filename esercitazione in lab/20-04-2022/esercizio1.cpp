/*

creare una funzione che calcola il cubo di un numero.

*/

#include <iostream>
using namespace std;

int cubo(int a){
    
    return a*a*a;

}

int main()
{

    int numero;
    cout<<"inserisci numero\n";
    cin>>numero;
    cout<<cubo(numero);
    
}