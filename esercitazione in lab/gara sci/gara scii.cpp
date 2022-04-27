/*Realizzare un programma che ci permetta di simulare la classifica di una gara sciistica in cui i partecipanti
sono individuati con il numero del pettorale e in un array viene registrato il tempo di discesa.
1)visualizzare la media dei tempi di discesa eil tempo massimo e minimo;
2)visualizzare visualizzare quanti giocatori hanno realizzato un tempo di discesa inferiore alla media;
3) dando in input il numero di un pettorale visualizzare il relativo tempo di discesa
4) modificare il tempo di discesa del partecipante con la pettorina numero 5
5) sostituire il tempo di discesa del partecipate con la pettorina con la pettorina numero 4 con quella del partecipante numero 3
6) attraverso l'utilizzo di un flag segnalare attraverso un output se almeno un partecipante ha registrato un tempo di discesa
inferiore a 15 secondi e indicarne il numero di pettorina e la dicitura world record,
10 giocatori*/

#include <iostream>

using namespace std;
float duratadiscesa[10];
float media;
string cambio;
int conta, numero, scambio;
bool flag=true;
int main()
{
    for(int i=0;i<10;i++){
        cout<<"Inserisci il tempo dello sciatore "<<i+1<<endl;
        cin>>duratadiscesa[i];
        
    }
   for(int i=0;i<10;i++){
        media=media+duratadiscesa[i];
    }
    media=media/10;
    cout<<"la media è  "<<media<<endl;
    int minimo = duratadiscesa[0];
    for(int i=0; i<10;i++){
        if(minimo>duratadiscesa[i]){
            minimo = duratadiscesa[i];
        }
    }
    cout<<"Il valore minimo è "<<minimo<<endl;
    int massimo = duratadiscesa[0];
    for(int i=0; i<10;i++){
        if(massimo<duratadiscesa[i]){
            massimo = duratadiscesa[i];
        }
    }
    cout<<"Il valore massimo è "<<massimo<<endl;
    for(int i=0;i<10;i++){
        if(duratadiscesa[i]<media){
            conta++;
        }
    }
    cout<<conta<<" I partecipanti che hanno fatto un tempo minore della media sono"<<endl;
    cout<<"Di quale sciiatore vuoi sapere il tempo"<<endl;
    
    cout<<"Per vedere il tempo dell'atleta digita il numero di pettorina ";
    cin>>numero;
    while(numero>10 or numero<0){
        cout<<"Il numero che hai inserito non è vadilo "\n " Riprovi: ";
        cin>>numero;
    }
    for(int i=0;i<10;i++){
        if(numero==i+1){
            cout<<"L'atleta numero "<<i+1<<" ha fatto un tempo di "<<duratadiscesa[i]<<endl;
        }
    }
    cout<<"Vuoi modificare il tempo di discesa del partecipante numero 5?\n";
    cin>>cambio;
    if(cambio=="si" or cambio=="SI"){
        cout<<"Il tempo dell'atleta numero 5 è di "<<duratadiscesa[4]<<endl<<"Inserisci il tempo nuovo: ";
        cin>>duratadiscesa[4];
    }
    else if(cambio=="no" or cambio=="NO"){
        
    }
    cout<<"Sono stati invertiti i valori del partecipante numero 3 e del partecipante numero 4"<<endl;
    scambio=duratadiscesa[2];
    duratadiscesa[2]=duratadiscesa[3];
    duratadiscesa[3]=scambio;
    cout<<"L'atleta numero 3 ha effettuato un tempo di "<<duratadiscesa[2]<<" secondi"<<endl<<"L'atleta numero 4 ha effettuato un tempo di "<<tempo[3]<<" secondi"<<endl;
    while(flag==true){
        for(int i=0;i<10;i++){
            if(duratadiscesa[i]<15){
                cout<<"\nL'atleta N "<<i+1<<" ha fatto un record del mondo battendo un tempo di 15 secondi";
            }
        }
        flag=false;
    }
    return 0;
}

