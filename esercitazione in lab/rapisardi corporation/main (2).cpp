/*
L'azienda Rapisardi Corpation dopo una lunga riunione del consiglio di amministrazione, 
ha deciso che per ottimizzare i processi aziendali necessita di un software gestionale per catalogare 
i prodotti presenti nel magazzino.
Hanno dunque deciso che il software in questione dovrà  avere un menù con le seguenti funzionalità :
1) Inserimento prodotto;
2) Ricerca prodotto;
3) Cancellazione di un prodotto;
4) Somma totale valore prodotti;
5) Somma del valore dei prodotti della stessa tipologia;
*/

#include <iostream>
using namespace std;

int prodotto [1000];
int quantita [1000];
int tipologia [1000];
int costo [1000];

void Inserimento_prodotto()
{
    string nome, tipologia;
    int quantita, costo, codice;
    cout<<"inserisci codice prodotto: ";
    cin>>codice;
    cout<<"inserisci il nome del prodotto: ";
    cin>>nome;
    cout<<"inserisci la tipologia del prodotto: ";
    cin>>tipologia;
    cout<<"inserisci la quantita del prodotto: ";
    cin>>quantita;
    cout<<"inserisci il costo del prodotto: ";
    cin>>costo;
}

void Ricerca_prodotto()
{
    int prodotto;
    cout<<prodotto<<endl;
}

void Cancellazione_prodotto()
{
    int prodotto;
    cout<<prodotto<<endl;
}

void Somma_valore_prodotto()
{
    int prodotto;
    cout<<prodotto<<endl;
}

void Somma_prodotti_stessa_tipologia()
{
    int prodotto;
    cout<<prodotto<<endl;
}

int main()
{
    for(int x=0; x<1000; x++) {
        prodotto[x] = -1;
        quantita[x] = -1;
        tipologia[x] = -1;
        costo[1000] = -1;
    }
   int scelta;
   
   cout<<"Cosa vuoi fare?\n";
   cout<<"1. Inserimento prodotto\n";
   cout<<"2. Ricerca prodotto\n";
   cout<<"3. Cancellazione prodotto\n";
   cout<<"4. Somma totale valore prodotto\n";
   cout<<"5. Somma valore dei prodotti della stessa tipologia\n";
   cin>>scelta;

    switch(scelta) {
        case 1:
            Inserimento_prodotto();
            break;
            
        case 2:
            Ricerca_prodotto();
            break;
            
        case 3:
           Cancellazione_prodotto();
            break;
            
        case 4:
            Somma_valore_prodotto();
            break;
            
        case 5:
            Somma_prodotti_stessa_tipologia();
            break;
            
    }
}