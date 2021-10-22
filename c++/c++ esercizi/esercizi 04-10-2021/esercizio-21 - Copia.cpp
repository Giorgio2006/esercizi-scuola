#include <iostream>
using namespace std;
int main()
{
    double numero, quadrato, differenza;
    cout<<"inserisci un numero e calcoleremo la differenza tra il quadrato e il numero" <<"\n";
    cin>>numero;
    quadrato=(numero*numero);
    differenza=(quadrato-numero);
    cout<<"il numero è";
    cout<<differenza;
    return 0;
}