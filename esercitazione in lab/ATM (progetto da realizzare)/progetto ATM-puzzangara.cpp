#include <iostream>
using namespace std;
int main()
{
   int soldiatm=6000;
   int soldi=10000;
   int limitegiorn=250;
   const string pin="1234g";
   int scelta;
   
   cout<<"1.versamento"<<endl;
   cout<<"2.prelievo"<<endl;
   cout<<"Ciao, cosa vuole fare?"<<endl;
   cin>>scelta;
   if (scelta==1) {
       cout<<"inserire pin: ";
       string pindainserire;
       cin>>pindainserire;
       if (pindainserire==pin){
           int versamento;
           cout<<"Quanto vuoi versare? ";
           cin>>versamento;
           if (versamento>limitegiorn) {
               cout<<"Transazione impossibile, limite gionaliero superato ";
           } else {
               soldi=soldi+versamento;
               cout<<"Transazione eseguita ti restano "<<soldi;
            
           }
        } else {
           cout<<"pin errato ";
        }
       
   } else if (scelta==2){
       cout<<"inserire pin: ";
       string pindainserire;
       cin>>pindainserire;
       if (pindainserire==pin){
           int prelievo;
           cout<<"Quanto vuoi prelevare? ";
           cin>>prelievo;
           if (prelievo>limitegiorn) {
               cout<<"Transazione impossibile, limite gionaliero superato ";
           } else {
               soldi=soldi-prelievo;
               cout<<"Transazione eseguita ti restano "<<soldi;
            
           }
        } else {
           cout<<"pin errato ";
        }
   } else {
       cout<<"scelta non valida ";
       
   } 
 
}