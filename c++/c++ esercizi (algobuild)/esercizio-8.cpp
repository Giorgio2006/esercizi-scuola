#include <iostream>
using namespace std;
int main()
{
    double I,II,III;
    cout<<"Tra tre numeri,scegliere il maggiore";
    cin>>I;
    cin>>II;
    cin>>III;
    if (I>II){
        if(I>III){
            cout<<"il numero più grande è "<<I;
        }
        else{
            cout<<"il numero più grande è "<<III;
        }
    }
    else if (II>III){
        cout<<"il numero più grande è "<<II;
    }  
    else{
        cout<<"il numero più grande è "<<III;
    }
    
 return 0;
}