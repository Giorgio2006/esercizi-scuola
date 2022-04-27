/*

realizzare un progamma che permetta di gestire il traffico aereo di un aeroporto.
In particolare ci saranno n.vettori per registare 
1-Codice del volo, 
2-Compagnia aerea, 
3-Partenza o Arrivo,
4-Orario di partenza,
5-Stato (partiro/arrivato),
6-Destinazione o punto di arrivo (cittC ),

1-Tenuto conto che il terzo vettore dovrC  contenere un codice il cui contenuto dovrC  essere P(partenza) o 
A(arrivo); 
2-Il vettore relativo allo stato potrC  contenere i seguenti codici: D(decollato), L(landed),
A(annullato), R(ritardo), B(boarding=in  partenza), P(progammato/schededuler).

Visualliare: 
1-le informazioni di un determinato volo;
2-Codice volo, la cittC(, l'orario dei voli in inbarco;
3-Le informazioni dei voli in partenza per una cittC  data in imput;

Data in input(?) l'ora attuale, oppure ricavrare orario di sistema visualliare
i voli il cui orario progammato C( superato e non C( ancora atterrato/partito e 
modificare lo stato in R. 

*/

#include <iostream>
using namespace std;
int
main ()
{
  int scelta, uscita, destinazione;
  string codicevolo;

  string codice[5] = { "ABC123", "DEF456", "FGH789", "IJK012", "LMN345" };
  string compagnia[5] =
    { "Ryanair", "EasyJet", "Alitalia", "Wizz Air", "Vueling Airlines" };
  string stato[5] = { "A", "P", "P", "A", "A" };
  int ora[5] = { 12, 23, 13, 00, 14 };
  int minuti[5] = { 20, 45, 55, 59, 33 };
  string citta[5] = { "Roma", "Milano", "New York", "Chicago", "Delia" };

  cout << "Da qui può visualliare il traffico aereo " << endl;
  cout << "Cosa vuole fare? " << endl;

  cout << "1-Visualizza le informazioni sui voli " << endl;
  cout << "2-Visualizza le informazioni sui voli che stanno per decollare " <<
    endl;
  cout <<
    "3-Visualizza i voli che stanno per partire scrivendo il nome di una cittC  "
    << endl;
  cin >> scelta;
  system ("clear");

  if (scelta != 1 and scelta != 2 and scelta != 3 and scelta !=
      4 and scelta != 5)
    {
      system ("clear");
      cout << " Scelta non trovata " << endl;
    }

  if (scelta == 1)
    {
      cout << "Quale volo vuole controllare? " << endl;
      cin >> codicevolo;
      if (codicevolo == "ABC123")
	{

	  cout << compagnia[0] << endl;
	  cout << stato[0] << endl;
	  cout << ora[0] << ":";
	  cout << minuti[0] << endl;
	  cout << citta[0] << endl;

	}

      if (codicevolo == "DEF456")
	{

	  cout << compagnia[1] << endl;
	  cout << stato[1] << endl;
	  cout << ora[1] << ":";
	  cout << minuti[1] << endl;
	  cout << citta[1] << endl;

	}

      if (codicevolo == "FGH789")
	{

	  cout << compagnia[2] << endl;
	  cout << stato[2] << endl;
	  cout << ora[2] << ":";
	  cout << minuti[2] << endl;
	  cout << citta[2] << endl;

	}

      if (codicevolo == "IJK012")
	{

	  cout << compagnia[3] << endl;
	  cout << stato[3] << endl;
	  cout << ora[3] << ":";
	  cout << minuti[3] << endl;
	  cout << citta[3] << endl;

	}

      if (codicevolo == "LMN345")
	{

	  cout << compagnia[4] << endl;
	  cout << stato[4] << endl;
	  cout << ora[4] << ":";
	  cout << minuti[4] << endl;
	  cout << citta[4] << endl;

	}
    }
}
