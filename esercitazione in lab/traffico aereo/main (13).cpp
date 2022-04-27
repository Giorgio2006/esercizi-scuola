/*

realizzare un progamma che permetta di gestire il traffico aereo di un aeroporto.
In particolare ci saranno n.vettori per registare 
1-Codice del volo, 
2-Compagnia aerea, 
3-Partenza o Arrivo,
4-Orario di partenza,
5-Stato (partiro/arrivato),
6-Destinazione o punto di arrivo (città),

1-Tenuto conto che il terzo vettore dovrà contenere un codice il cui contenuto dovrà essere P(partenza) o 
A(arrivo); 
2-Il vettore relativo allo stato potrà contenere i seguenti codici: D(decollato), L(landed),
A(annullato), R(ritardo), B(boarding=in  partenza), P(progammato/schededuler).

Visualliare: 
1-le informazioni di un determinato volo;
2-Codice volo, la cittè, l'orario dei voli in inbarco;
3-Le informazioni dei voli in partenza per una città data in imput;

Data in input(?) l'ora attuale, oppure ricavrare orario di sistema visualliare
i voli il cui orario progammato è superato e non è ancora atterrato/partito e 
modificare lo stato in R. 

*/

#include <iostream>
using namespace std;
int main ()
{
    int scelta, uscita;
    
    string codice[5] = {"ABC123", "DEF456", "FGH789", "IJK012", "LMN345" };
    string compagnia[5] = {"Ryanair", "EasyJet", "Alitalia", "Wizz Air", "Vueling Airlines" };
    string stato[5] = {"A", "P", "P", "A", "A"};
    int ora [5] = {12, 23, 13, 00, 14  };
    int minuti [5] = {20, 45, 55, 59, 33 };
    string citta [5] = {"Roma", "Milano", "New York", "Chicago", "Delia" };
    
    cout<<"Da qui può visualliare il traffico aereo "<<endl;
    cout<<"Cosa vuole fare? "<<endl;
    
    cout<<"1-Visualizza le informazioni sui voli "<<endl;
    cout<<"2-Visualizza le informazioni sui voli che stanno per imbarcare "<<endl;
    cout<<"3-Visualizza i voli che stanno per partire scrivendo il nome di una città "<<endl;
    cin>>uscita;
    cin>>scelta;
    
    
    
    
}