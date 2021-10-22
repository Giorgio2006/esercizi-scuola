#include <iostream>
using namespace std;
int main()
{
    double numero, quadrato, successivo;
    cout<<"inserisci un numero e calcoliamo il succesore del quadrato" <<"\n";
    cin>>numero;
    quadrato=(numero*numero);
    successivo=(quadrato+1);
    cout<<"il tuo numero è";
    cout<<successivo;
    return 0;
    
}
