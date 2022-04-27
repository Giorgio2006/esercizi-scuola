/*Il supermercato Rapisardi Shop  necessita di un software per le registrazioni di cassa e per stampare 
gli scontrini sui prodotti venduti.
Considerando che nel periodo di Natale (tutto il mese di dicembre) 
lo shop effettua il 20 % di sconto sui prodotti e che ai clienti con la carta fedeltà 
è concesso un ulteriore  5% di sconto, il programma, prima di operare dovrà essere inizializzato inserendo 
la data attuale. Successivamente per ogni operazione il programma dovrà chiedere se il cliente possiede 
la carta o meno.
I prodotti sono individuati tramite il codice a barre e per ogni operazione dovrà essere effettuata 
la somma dei prodotti acquistati dal cliente per la stampa dello scontrino.
La registrazione dei prodotti dovrà essere effettuata tenendo conto del codice a barre.
Ogni volta che il codice a barre di un prodotto viene passato sul lettore 
(simulate questa operazione semplicemente inserendo il codice a barre da tastiera), 
la quantità totale di quei prodotti nello store dovrà essere scalata di uno.*/

#include <iostream>
using namespace std;
int main (){
    string Cozze_al_Pomodoro_500g = "4785695692";
    double prodotto1Prezzo = 5.90;
    int prodotto1Quantita = 2;
    
    
    string Gelato_alla_Vaniglia_del_Madagascar_300g = "1258796304"; 
    double prodotto2Prezzo = 5.10;
    int prodotto2Quantita = 1;
  
    
    string Cioccolato_alle_nocciole = "1547896230";
    double prodotto3Prezzo = 1.20;
    int prodotto3Quantita = 1;

    
    string pesto_barilla = "1023547896";
    double prodotto4Prezzo = 2.14;
    int prodotto4Quantita = 2;
    
    
    string ragu_alla_bolognese = "2014578963";
    double prodotto5Prezzo = 3.55;
    int prodotto5Quantita = 1;
    
    string salame_napoli = "4587963254";
    double prodotto6Prezzo = 1.85;
    int prodotto6Quantita = 3;
    
    
    
    string mortadella = "7845963201";
    double prodotto7Prezzo = 2.00;
    int prodotto7Quantita = 1;
    
    
    
    string galbanino = "5698741236";
    double prodotto8Prezzo = 1.33;
    int prodotto8Quantita = 2;
    
    
    
    string banane = "3621459874";
    double prodotto9Prezzo = 3.49;
    int prodotto9Quantita = 1;
    
    
    
    string anguria = "3254789125";
    double prodotto10Prezzo = 1.70;
    int prodotto10Quantita = 1;
    
    
    cout<<"Benvenuto al Rapisardi Shop";
    
}