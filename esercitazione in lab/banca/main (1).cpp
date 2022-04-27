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
  int seleziona, saldo, prelievo, versamento, scelta, scelta1, scelta2, scelta3, nuovoconto;
  string  sceltaI, utente, password, uscita;
  string nome[2] = {"Marco", "973120"};  
  string cognome[1] = { "Rossi"};
  string data_nascita [1] = {"12/04/2004"};
  int saldo_conto [1] = {150000};
  string data_apertura_conto [1] = {"15/12/2018"};
  string codice_fiscale_interstatario [1] = {"RSSMRC04D12A089E"};
  string nome_della_banca = "Unicredit";
  cout<<"=============================="<<endl;
  cout<<"=       Unicredit            ="<<endl;
  cout<<"=============================="<<endl;
  cout<<"Benvenut* nella nostra banca \n";
  cout<<"Digiti " << " entra  "<< " per eseguire un azione  "<< " oppure digita "<<  " NO "<<endl;
  cin>>sceltaI;
  system ("clear");
  
    bool flag = true;
    while(flag){
    
  if (sceltaI=="entra" and "Entra" and "ENTRA")
  {
      cout<<"1.Visualizza_Conto"<<endl;
      cout<<"2.Versa_Importo"<<endl;
      cout<<"3.prelievo_Importo"<<endl;
      cin>>scelta;
  }
  system ("clear");
  
    if(scelta==1){
        cout<<"=============================="<<endl;
        cout<<"=       Unicredit            ="<<endl;
        cout<<"=============================="<<endl;
        cout<<"Nel suo conto ci sono "<<saldo_conto [0]<<endl;
        cout<<"Il suo nome: "<<nome[0]<<endl;
        cout<<"Il suo cognome: "<<cognome[0]<<endl;
        cout<<"la sua password: "<<nome[1]<<endl;
        cout<<"Data di nascita: "<<data_nascita[0]<<endl;
        cout<<"Data apertura conto: "<<data_apertura_conto[0]<<endl;
        cout<<"Codice fiscale: "<<codice_fiscale_interstatario[0]<<endl;
        cout<<"Digita CIAO per uscire "<<endl;
        cin>>uscita;
        
        system ("clear"); 
        
    }
    
    
    if(scelta==2)
    {
        cout<<"=============================="<<endl;
        cout<<"=       Unicredit            ="<<endl;
        cout<<"=============================="<<endl;
        cout<<"Quanto vuole versare"<<endl;
        cin>>versamento;
        nuovoconto = versamento + saldo_conto[0];
        cout<<"Nel suo conto ci sono "<< nuovoconto <<"€"<<endl;
    system ("clear");
        
    }
}
    
}