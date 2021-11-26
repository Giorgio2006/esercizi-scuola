#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Inserisci un numero";
    cin>>n;
    if (n%2==0){
        while(n>=0){
            cout<<n;
             =n-2;
        }
    } else {
        n=n-1;
        while (n>=0){
            cout<<n;
            n=n-2;
        }
    }
    return 0;
}