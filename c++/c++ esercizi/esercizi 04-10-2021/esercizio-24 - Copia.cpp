#include <iostream>
using namespace std;
int main()
{
    double prezzo, aumento, sconto, prezzoscontato;
    cout<<"dimmi l'aumento";
    cin>>aumento;
    cout<<"prezzo merce";
    cin>>prezzo;
    sconto=(prezzo*10/100);
    prezzoscontato= (prezzo-sconto);
    cout<<"pagamento";
    cout<<prezzoscontato;
    return 0;
}