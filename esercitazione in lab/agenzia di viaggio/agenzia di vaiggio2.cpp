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
   int sconto;
   
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
               sconto=pagamento*10/100;
               cout<<sconto<<endl;
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