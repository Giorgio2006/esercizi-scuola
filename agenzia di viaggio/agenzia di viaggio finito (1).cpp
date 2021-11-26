/*Un agenzia di viaggi effettua le prenotazioni per i voli della compagnia "rapisardi airlines" che
applica delle tariffe standard per le seguenti destinazioni: Catania-Roma 30€; 
Catania-Praga 55€;   Catania-NewYork  400€.
Al momento della prenotazione il cliente dovrà indicare il numero di passeggeri da prenotare
e l'eventuale supplemento del bagaglio in stiva (20€) per le destinazioni Europee e 
di 50€ per i voli intercontinentali.
A novembre l'agenzia applica uno sconto del 10% se il costo della prenotazione è superiore a 500€.
Sul costo della prenotazione bisognerà calcolare le imposte di imbarco del 10% per destinazioni
Europee e 17% per destinazioni intercontinentali.
Visualizzare il totale lordo della prenotazione.
Le imposte di imbarco.
Lo sconto.
Il totale netto.
Il messaggio sconto d'autunno se è stato applicato lo sconto.
Il progranmma dovrà prevedere il controlo dell'input in modo che non possano essere
inseriti codici di destinazioni diversi da quelli prestabiliti.
Se il cliente ha bagagli in stiva visualizzare il messaggio "recarsi per il check-in allo sportello 8"
*/
#include <string>
#include <iostream>
using namespace std;
int main(){
    int destinazione, persone, rispostabagagli, bagagli;
    short imposta_eu, sconto, parziale, totale;
    cout<<" Benventuo in Rapisardi airlines"<<endl;
    cout<<" Selezionare una destinazione"<<endl;
    cout<<" 1. Roma"<<endl;
    cout<<" 2. Praga"<<endl;
    cout<<" 3. New-York"<<endl;
    cin>>destinazione;
    if(destinazione!=1 and destinazione!=2 and destinazione!=3){
        system("clear");
        cout<<" Destinazione non trovata "<<endl;
    }
    if(destinazione==1){
        system("clear");
        cout<<" Quante persone siete in totale? ";
        cin>>persone;
        cout<<" Quanti bagagli avete in stiva? ";
        cin>>bagagli;
        parziale=persone*30 + bagagli*20;
        imposta_eu=parziale*10/100;
        totale=parziale+imposta_eu;
        if(totale>500){
            sconto=totale*10/100;
        system("clear");
        cout<<" Il totale lordo è "<<parziale<<endl;
        cout<<" Le imposte di imbarco sono di "<<imposta_eu<<" €"<<endl;
        cout<<" Il totale netto è "<<totale<<endl;
        cout<<" È stato applicato uno sconto autunnale di "<<sconto<<" €"<<endl;
        cout<<" Il totale da pagare è di "<<totale-sconto<<" €"<<endl;
        }
        else{
        system("clear");
        cout<<" Il totale lordo è "<<parziale<<" €"<<endl;
        cout<<" Le imposte di imbarco sono di "<<imposta_eu<<" €"<<endl;
        cout<<" Il totale da pagare è di "<<totale-sconto<<" €"<<endl;
            
        }
    }
    
    
    if(destinazione==2){
        system("clear");
        cout<<" Quante persone siete in totale? ";
        cin>>persone;
        cout<<" Quanti bagagli avete in stiva? ";
        cin>>bagagli;
        parziale=persone*55 + bagagli*20;
        imposta_eu=parziale*10/100;
        totale=parziale+imposta_eu;
        if(totale>500){
            sconto=totale*10/100;
        system("clear");
        cout<<" Il totale lordo è "<<parziale<<endl;
        cout<<" Le imposte di imbarco sono di "<<imposta_eu<<" €"<<endl;
        cout<<" Il totale netto è "<<totale<<endl;
        cout<<" È stato applicato uno sconto autunnale di "<<sconto<<" €"<<endl;
        cout<<" Il totale da pagare è di "<<totale-sconto<<" €"<<endl;
        }
        else{
        system("clear");
        cout<<" Il totale lordo è "<<parziale<<" €"<<endl;
        cout<<" Le imposte di imbarco sono di "<<imposta_eu<<" €"<<endl;
        cout<<" Il totale da pagare è di "<<totale-sconto<<" €"<<endl;
            
        }
    }
    
    
    if(destinazione==3){
        system("clear");
        cout<<" Quante persone siete in totale?  ";
        cin>>persone;
        cout<<" Quanti bagagli avete in stiva? --> ";
        cin>>bagagli;
        parziale=persone*400 + bagagli*20;
        imposta_eu=parziale*17/100;
        totale=parziale+imposta_eu;
        if(totale>500){
            sconto=totale*10/100;
        system("clear");
        cout<<" Il totale lordo è "<<parziale<<endl;
        cout<<" Le imposte di imbarco sono di "<<imposta_eu<<" €"<<endl;
        cout<<" Il totale netto è "<<totale<<endl;
        cout<<" È stato applicato uno sconto autunnale di "<<sconto<<" €"<<endl;
        cout<<" Il totale da pagare è di "<<totale-sconto<<" €"<<endl;
        }
        else{
        system("clear");
        cout<<" Il totale lordo è "<<parziale<<" €"<<endl;
        cout<<" Le imposte di imbarco sono di "<<imposta_eu<<" €"<<endl;
        cout<<" Il totale da pagare è di "<<totale-sconto<<" €"<<endl;
            
        }
    }
}