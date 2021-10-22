#include <iostream>
using namespace std;
int main()
{
    double numero, doppio, quadrato, successivo;
    cout<<"inserisci un numero e calcoleremo il successivo del doppio del tuo nuemero"<<"\n";
    cin>>numero;
    doppio= (numero*2);
    quadrato=(doppio + doppio);
    successivo=(quadrato+1);
    cout<<"il tuo numero è";
    cout<<successivo;
    return 0;
}   
    
    