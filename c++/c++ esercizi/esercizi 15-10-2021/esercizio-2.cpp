#include <iostream>

using namespace std;

int main()
{
    int numero, divisore;
    cout<<"numero da dividere";
    cin>>numero;
    cout<<"inserire il divisore";
    cin>>divisore;
    if (numero%divisore==0){
        cout<<"divisibile";
    }
    else {
        cout<<"non è divisibile";
    }
    return 0;
   
}