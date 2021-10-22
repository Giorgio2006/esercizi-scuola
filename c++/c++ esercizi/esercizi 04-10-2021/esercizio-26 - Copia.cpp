#include <iostream>
using namespace std;
int main()
{
    double stipendio, extra, enciclopedie, extrastipendio, trattenute, stipendiofinale;
    stipendio=(1000);
    extra=(2000);
    cout<<"quante enciclopedie sono state vendute" <<"\n";
    cin>>enciclopedie;
    extrastipendio=(extra*enciclopedie+stipendio);
    trattenute=(18*extrastipendio/100);
    stipendiofinale=(extrastipendio- trattenute);
    cout<<"alla fine lo stipendio è" <<"\n";
    cout<<stipendiofinale;
    cout<<"euro";
    return 0;
}