#include <iostream>
using namespace std;

int main(){
    double angolo1,angolo2,angolo3, angolototale;
    cout<<"Dammi i tre angoli"<<endl;
    cin>>angolo1;
    cin>>angolo2;
    cin>>angolo3;
    angolototale= angolo1 + angolo2 + angolo3;
    if (angolo1==90 or angolo2==90 or angolo3==90 && angolototale == 180){
        cout<<"triangolo è rettangolo";
    }
    else {
        cout<<" non è di tipo rettangolo";
    }
    return 0;
}