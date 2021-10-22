/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int Prezzo,Soldi;
    cout<<"Prezzo ";
    cin>>Prezzo;
    cout<<"Soldi ";
    cin>>Soldi;
    if (Soldi<=Prezzo)
    
        {
            cout<<"Acquistato";
        }
    else 
        { 
            cout<<"Soldi insufficienti";
        }
       
    cout<<"il risultato e' ";
    cout<<Soldi<<"\n";
    system ("pause");
}
    