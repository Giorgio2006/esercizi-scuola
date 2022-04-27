/******************************************************************************

Realizzare un programma, utilizzando lo switch case, che legga in input un 
voto rappresentato da un carattere tra A ed E e ne stampi il significato.
Ad esempio:
A significa ottimo;
B significa distinto;
C significa discreto;
D significa sufficiente;
E significa insufficiente.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    char lettera;
    cin>>lettera;
    switch(lettera){
         
         case 'A':
         cout<<"ottimo";
         break;
         
         case 'B':
         cout<<"distinto";
         break;
         
         case 'C':
         cout<<"discreto";
         break;
         
         case 'D':
         cout<<"sufficiente";
         break;
         
         case 'E':
         cout<<"insufficiente";
         break;
         
         default:
         cout<<"NON ESISTE";
         break;
    }
}