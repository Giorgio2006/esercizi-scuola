/*

 Creare una funzione che riceve tre numeri interi e restituisce la differenza tra il più grande e il più piccolo.

*/
#include <iostream>
using namespace std;

int differenzaFraNumeri(int numero1, int numero2, int numero3){
    
    int numerogrande, numeropiccolo, differenza;
    
    if (numero1>numero2){
        if (numero1>numero3){
            numerogrande=numero1;
            numeropiccolo=numero2;
        }
        else{
           numerogrande=numero3;
            numeropiccolo=numero2;
        }
    } else {
        if (numero2>numero3){
            numerogrande=numero2;
            numeropiccolo=numero1;
        }
        else{
            numerogrande=numero3;
            numeropiccolo=numero1;
        }
    }
    differenza=numerogrande-numeropiccolo;
    return differenza;
}

int main()
{
    int PNumero, SNumero, TNumero;
    cout<<"Inserisci tre nuemri:"<<endl;
    cin>>PNumero;
    cin>>SNumero;
    cin>>TNumero;
    cout<<"La differenza tra il più grande è il più piccolo è: "<<differenzaDueNumeri(PNumero, SNumero, TNumero);

    return 0;
}