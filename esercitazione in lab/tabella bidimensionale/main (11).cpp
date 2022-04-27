/*
Realizzare un programma in c++ che permetta di registrare in una tabella bidimensionale 
i nomi e i cognomi dei clienti di un'azienda (6 clienti);
Effettuare le seguenti manipolazioni:

1. Visualizzare il contenuto dell'elemento (3;2);
2. Visualizzare il contenuto dell'elemento le cui coordinate vengono date in input;
3. Visualizzare la posizione di un cognome dato in input;
4. Visualizzare nome e cognome di tutti i clienti che si chiamano con un nome dato in input;
5. Modificare il cognome e il nome di un elemento la cui posizione è data in input;
*/

#include <iostream>
using namespace std;
int main(){
    
    int scelta;
    string clienti[6][2];
    
    for(int i=0; i<6; i++){
        cout<<"inserisci nome ";
        cin>>clienti[i][0];
        cout<<"inserisci congnome ";
        cin>>clienti[i][1];
    }
    
    cout<<"Benvenuto, cosa desidera fare";
    cout<<"Da qui può visualizzare il cognome del giocatore 3 ";
    cout<<"Visualizzare il contenuto dell'elemento le cui coordinate vengono date in input ";
    cout<<"Visualizzare la posizione di un cognome dato in input ";
    cout<<"Visualizzare nome e cognome di tutti i clienti che si chiamano con un nome dato in input ";
    cout<<"Modificare il cognome e il nome di un elemento la cui posizione è data in input ";
    cin>>scelta;
    
    if (scelta==1){
        
        cout<<"il cognome del tuo cliente è "<<clienti<<3.2;
        
    }
    
    
    
}
 