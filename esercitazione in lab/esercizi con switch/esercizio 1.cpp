/******************************************************************************

In un albergo il prezzo della camera dipende dal piano in cui ci si trova secondo la seguente tabella.
piano 1 € 35
piano 2 € 45
piano 3 € 55
piano 4 € 65
Calcola il prezzo del conto sapendo il numero di giorni di soggiorno e il piano della camera.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int camera, sordi, giorni;
    cout<<"Buongiorno, dove si trova la camera?"<<endl;
    cin>>camera;
    
    switch (camera){
        case 1:
        sordi = 35;
        break;
        
        case 2:
        sordi = 45;
        break;
        
        case 3:
        sordi = 55;
        break;
        
        case 4:
        sordi = 65;
        break;
        
        default:
        sordi = 0;
        break;
    }
    cout<<"Quanti giorni state"<<endl;
    cin>>giorni;
    cout<<"la sua camera costa " <<sordi*giorni<<" euro"<<endl;
}