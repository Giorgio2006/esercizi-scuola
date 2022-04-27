/* Implementare un programma che rappresenti un conto corrente bancario. Il conto corrente conserva i seguenti:

1. Nome, cognome, data di nascita, saldo del conto, data di apertura del conto, codice fiscale dell'intestatario;
2. Nome della banca;

Il conto ha le seguenti funzionalità:

1. Visualizza conto (in cui vengono visualizzate le caratteristiche sopra elencate);
2. Versa importo;
3. Prelievo importo;

Il programma è dotato di un menù che consente all'utente di scegliere una delle precedenti opzioni*/

#include <iostream>
using namespace std;
int main ()
{
  string nome[4] = {"Marco", "Mattia", "Giovanni", "Giuseppe"};  
  string cognome[4] = { "Rossi", "Ferrari", "Muciaccia", "Conte"};
  string data di nascita [4] = {"12/04/2004", "29/12/2000", "04/01/2006", "29/11/2005"};
  double saldo del conto [4] = {150.000, 2000, 50.000, 20};
  string data di apertura del conto [4] = {"15/12/2018", "28/04/2017", "31/12/2016", "08/08/2020"};
  string codice fiscale dell'interstatario [4] = {"RSSMRC04D12A089E", "FRRMTT00T29A089V", "GVNMCC06A04B429V", "CNTGPP05S29A089X"};
  string nome della banca = "Unicredit";
  cout<<"Benvenut* nella nostra banca \n";
  
}