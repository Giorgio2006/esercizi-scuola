/*

 Creare un programma che dato un carattere in ingresso verifica se è maiuscolo

*/
#include <iostream>
using namespace std;

bool Lettera(char lettera){
    if (lettera>='A' and lettera<='Z') return true;
    else return false;
}

int main()
{
   char carattere;
   cout<<"Inserire uan lettera: ";
   cin>>carattere;
   if (Lettera(carattere)) {
       cout<<"Lettera maiuscola.";
   } else {
       cout<<"Lettera minuscola.";
   }
   return 0;
}