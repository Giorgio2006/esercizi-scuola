#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"inserire numero";
    cin>>numero;
    if (numero%3==0 and numero!=5){
        cout<<"divisibile per 3, ma non divisibileper 5 ";
    }
    else {
        cout<<"non è divisibile per 3, ma forse è divisibile per 5";
    }
    return 0;
        
}