/******************************************************************************

Scrivere un programma che riceve in ingresso un mese (numero intero) e stampa quanti giorni ha quel mese.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
  int mese;
  
    cout<<"Inserici mese"<<endl;
    cin>>mese;
    
  switch (mese){
      
      case 1:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      case 2:
      cout<<"Questo mese ha 28 giorni";
      break;
      
      case 3:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      case 4:
      cout<<"Questo mese ha 30 giorni";
      break;
      
      case 5:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      case 6:
      cout<<"Questo mese ha 30 giorni";
      break;
      
      case 7:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      case 8:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      case 9:
      cout<<"Questo mese ha 30 giorni";
      break;
      
      case 10:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      case 11:
      cout<<"Questo mese ha 30 giorni";
      break;
      
      case 12:
      cout<<"Questo mese ha 31 giorni";
      break;
      
      default:
      cout<<"Non esiste";
      break;
  }
    
    
    
}