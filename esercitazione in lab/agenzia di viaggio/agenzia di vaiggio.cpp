/* Un agenzia di viaggi effettua le prenotazioni per i voli della compagnia Rapisardi airlines
che applica delle tariffe standard per le seguenti destinazioni:
1. Catania-Roma 30€;
2. Catania-Praga 55€;
3. Catania-New York 400€.

Al momento della prenotazione il cliente dovrà indicare il numero di passeggeri da prenotare e
l'eventuale supplemento del bagaglio in stiva che corrisponde a €20 per le destinazioni europee
e di 50€ per i voli intercontinentali.
Nel mese di novembre l'agenzia applica uno sconto del 10% se il costo della prenotazione se il
costo complessivo è superiore a 500€. 
Sul costo della prenotazione bisognerà calcolare le imposte di imbarco del 10% per destinazioni
europee e 17% per destinazioni intercontinentali. Visualizzare il totale netto: 
-Totale lordo
-Biglietti,
-bagaglio,
-imposta meno lo sconto,
-il messaggio "sconto d'autunno" se è stato applicato lo sconto
Il programma dovrà prevedere il controllo dell'input in maniera tale che non possano essere inseriti
codici di destinazioni diversi da quelli prestabiliti.
Se il cliente ha bagagli in stiva visualizzare il messaggio "recarsi per il check in allo
sportello 8" */

#include <iostream>
using namespace std;
int main()
{
   int scelta, persone;
   string mese;
   bool flag = false;
   int prezzo1=30;
   int prezzo2=55;
   int prezzo3=400;
   int pagamento;
   
   cout<<"Le diamo il benvenuto in Rapisardi airlines"<<endl;
   cout<<"Dove vuole andare?"<<endl<<endl;
   cout<<"1-Catania-Roma"<<endl;
   cout<<"2-Catania-Praga"<<endl; 
   cout<<"3-Catania-New York"<<endl<<endl;
   cout<<"Seleziona la destinazione: ";
   cin>>scelta;
   
   while(flag == false) {
       flag = false;
       if(scelta == 1) {
           cout<<"Si, ma in quanti siete? ";
           cin>>persone;
           pagamento=persone*prezzo1;
           cout<<"Il costo è di €"<<pagamento<<endl;
           cout<<"Al momento della prenotazione, sei a Novembre? ";
           cin>>mese;
           
           if (mese=="si" or mese =="SI" or mese == "Si" or mese == "sI") {
               cout<<"Perfetto, hai diritto ad uno sconto del 10%"<<endl;
               flag = true;
           } else if (mese == "no") {
                cout<<"NON HAI diritto ad uno sconto del 10%"<<endl;
                flag = true;
           }
       } else if (scelta == 2) {
           cout<<"Si, ma in quanti siete? ";
           cin>>persone;
           pagamento=persone*prezzo2;
           cout<<"Il costo Ã¨ di â‚¬"<<pagamento<<endl;
           cout<<"Al momento della prenotazione, sei a Novembre? ";
           cin>>mese;
           
           if (mese=="si" or mese =="SI" or mese == "Si" or mese == "sI") {
               cout<<"Perfetto, hai diritto ad uno sconto del 10%"<<endl;
               flag = true;
           } else if (mese == "no") {
                cout<<"NON HAI diritto ad uno sconto del 10%"<<endl;
                flag = true;
           }
           
       } else if (scelta == 3) {
           cout<<"Si, ma in quanti siete? ";
           cin>>persone;
           pagamento=persone*prezzo3;
           cout<<"Il costo è di € "<<pagamento<<endl;
           cout<<"Al momento della prenotazione, sei a Novembre? ";
           cin>>mese;
           
           if (mese=="si" or mese =="SI" or mese == "Si" or mese == "sI") {
               cout<<"Perfetto, hai diritto ad uno sconto del 17%"<<endl;
               flag = true;
           } else if (mese == "no") {
                cout<<"NON HAI diritto ad uno sconto del 17%"<<endl;
                flag = true;
           }
       } else {
           cout<<"Scelta non valida!"<<endl;
           flag = true;
       }
   }

}