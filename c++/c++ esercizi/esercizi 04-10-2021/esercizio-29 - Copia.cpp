#include <iostream>
using namespace std;
int main()
{
    double lordo, scontato, percentuale;
    cout<<"importo lordo"<<"\n";
    cin>>lordo;
    cout<<"importo scontato" <<"\n";
    cin>>scontato;
    if (lordo>scontato) {
        percentuale=(scontato/lordo*100);
        cout<<"percentuale scontata è di";
        cout<<percentuale;
        cout<<"%";
    }
    else {
        percentuale=(lordo/scontato*100);
        cout<<"percentuale scontata è di";
        cout<<percentuale;
        cout<<"%";
        }
        return 0;
}