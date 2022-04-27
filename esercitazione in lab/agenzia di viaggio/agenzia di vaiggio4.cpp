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
   int pagamento, pagamento2, pagamento3;
   int sconto1 = totale_lordo1 - totale_lordo1*10/100;
   int sconto2 = totale_lordo2 - totale_lordo2*10/100;
   int sconto3 = totale_lordo3 - totale_lordo3*10/100;
   int bagagli;
   int totale_lordo1, totale_lordo2, totale_lordo3;
   int imposta1 = (prezzo1 * 10)/100;
   int imposta2 = (prezzo2 * 10)/100;
   int imposta3 = (prezzo3 * 17)/100;
   int supplementoeu = 20;
   int supplementointer = 50;
   
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
           cout<<"In quanti siete? ";
           cin>>persone;
           cout<<"Al momento della prenotazione, sei a Novembre? ";
           cin>>mese;
           
           if (mese=="si" or mese =="SI" or mese == "Si" or mese == "sI") {
               cout<<"Perfetto, hai diritto ad uno sconto del 10%"<<endl;
               flag = true;
               sconto1=pagamento*10/100;
           } else {
                cout<<"NON HAI diritto ad uno sconto del 10%"<<endl;
                flag = true;
           }
           cout<<"Quanti bagagli avete?"<<endl;
            cin>>bagagli;
            totale_lordo1 = prezzo1 * persone + imposta1 + bagagli + supplementoeu;    
            
       } else if (scelta == 2) {
           cout<<"In quanti siete? ";
           cin>>persone;
           cout<<"Al momento della prenotazione, sei a Novembre? ";
           cin>>mese;
           
           if (mese=="si" or mese =="SI" or mese == "Si" or mese == "sI") {
               cout<<"Perfetto, hai diritto ad uno sconto del 10%"<<endl;
               flag = true;
               sconto2=pagamento*10/100;
           } else {
                cout<<"NON HAI diritto ad uno sconto del 10%"<<endl;
                flag = true;
           }
            cout<<"Quanti bagagli avete?"<<endl;
            cin>>bagagli;
            totale_lordo2 = prezzo2 * persone + imposta2 + bagagli + supplementoeu;    
            
          
           
       } else if (scelta == 3) {
           cout<<"In quanti siete? ";
           cin>>persone;
           cout<<"Al momento della prenotazione, sei a Novembre? ";
           cin>>mese;
           
           if (mese=="si" or mese =="SI" or mese == "Si" or mese == "sI") {
               cout<<"Perfetto, hai diritto ad uno sconto del 17%"<<endl;
               flag = true;
               sconto3=pagamento*17/100;
           } else {
                cout<<"NON HAI diritto ad uno sconto del 17%"<<endl;
                flag = true;
           }
             cout<<"Quanti bagagli avete?"<<endl;
            cin>>bagagli;
            totale_lordo3 = prezzo3 * persone + imposta3 + bagagli + supplementointer;
            if (totale_lordo3>=500){
                totale_lordo3 = totale_lordo3 - sconto3
            }
       } else {
           cout<<"Scelta non valida!"<<endl;
           flag = true;
       }

   }

}