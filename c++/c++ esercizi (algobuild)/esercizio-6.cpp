/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int prezzo=30,giorni, sconto, totale;
    cout<<"inserisci i giorni di noleggio ";
    cin >>giorni;
    if (giorni>6)
    {
        cout<<"scontato, lo sconto E'di è ";
        prezzo=prezzo*giorni;
        sconto=prezzo/10;
        cout<<"\n";
        cout<<"in totale devi pagare è ";
        cout<<prezzo-sconto;
    }
    else 
    {
        cout<<"niente sonto ";
    }
    return 0;


}