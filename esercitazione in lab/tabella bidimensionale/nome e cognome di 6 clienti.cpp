/******************************************************************************
realizzare un progamma in c++ che permetta di registare in una tabella bidimesionale 
nome e congnome 
di 6 clienti di un azienda. 

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    
    string clienti[6][2];
    
    for(int i=0; i<6; i++){
        cout<<"inserisci nome ";
        cin>>clienti[i][0];
        cout<<"inserisci congnome ";
        cin>>clienti[i][1];
    }
}
 