#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"inserisci numero ";
    cin>>numero;
    if(numero%3==0)
    {
        cout<<"divisibile per 3 ";
    }
    else 
    {  if  (numero%7==0)
        cout<<"divisibile per 7 ";
    }
    return 0;
}
