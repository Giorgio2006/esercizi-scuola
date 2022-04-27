/******************************************************************************

realizzare un programma che permetta di caricare in 4 vettori paralleli il
cognome, nome, tipo abbonamento, e importo abbonamento.
Dopo aver effettuato il caricaemnto effettuare le seguenti operazioni:
1)Visualizzare l'importo totale degli abbonamenti ad un determinato servizio
    dato in input.
2)Dato in input il cognome di un'abbonato modificare l'importo dell'abbonamento.
3)Trasportare in un'altro vettore i cognomi degli abbonati invertento l'ordine.

*******************************************************************************/
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
using namespace std;

void Clear(){
    #if _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

int main()
{   
    bool flag = true;
    int scelta, importo_unito, importo_modificato;
    string scelta_stringa;
    string cognome_al_contrario[5];
    string cognome[5] = {"Lampa", "Foglio", "Lasagna", "Campo", "Maia"};
    string nome[5] = {"Dario", "Rosa", "Emiliana", "Fiorito", "Lino"};
    string tipo_abbonamento[5] = {"Crossfit", "Zumba", "Cardio e Pesi", "Crossfit", "Cardio e Pesi"};
    int importo_abbonamento[5] = {30, 20, 45, 70, 65};
    while(flag){
        cout << "Cosa vuoi fare?\n1)Visuallizzare l'importo totale degli abbonamenti\n2)Modificare importo\n3)Trasportare i cognomi.\n4)Uscire\n\n";
        cout.flush();
        cin >> scelta;
        if (scelta == 1){
            cout << "Che abbonamenti vuoi verificare?\n";
            cin >> scelta_stringa;
            if (scelta_stringa == "Crossfit"){
                importo_unito = importo_abbonamento[0] + importo_abbonamento[3];
                cout << importo_unito <<endl;
                sleep(2);
                Clear();
            }
            else if(scelta_stringa == "Zumba"){
                importo_unito = importo_abbonamento[2];
                cout << importo_unito <<endl;
                sleep(2);
                Clear();
            }
            else if(scelta_stringa == "Cardio" || scelta_stringa == "Pesi" || scelta_stringa == "Cardio e Pesi"){
                importo_unito = importo_abbonamento[2] + importo_abbonamento[4];
                cout << importo_unito <<endl;
                sleep(2);
                Clear();
            }
        }
        else if(scelta == 2){
            cout << "Quale importo vuoi modificare?\n";
            cin >> scelta;
            cout << "\nDi quanto vuoi modificarlo?\n";
            cin >> importo_modificato;
            importo_abbonamento[scelta] = importo_modificato;
            sleep(2);
            Clear();
        }
        else if(scelta == 3){
            int x = 0;
            for(int i = 4; i >= 0; i--){
            cognome_al_contrario[x] = cognome[i];
            cout << cognome_al_contrario[x] << endl;
            x++;
            }
            sleep(2);
            Clear();
        }
        else if(scelta == 4){
            flag = false;
        }
    }

    return 0;
}