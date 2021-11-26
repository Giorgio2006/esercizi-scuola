#include <iostream>
using namespace std;
int main (){
    int numeratore, denominatore;
    cout << "Dammi il numeratore e denominatore di una frazione ";
    cin >> numeratore;
    cin >> denominatore;
    if (numeratore == denominatore or (denominatore * 2) == numeratore){
            cout << "La frazione è apparente ";
        }
        else if (numeratore > denominatore){
            cout << "La frazione è impropria ";
        }
        else if (numeratore < denominatore){
            cout << "La frazione è propria ";
        }
}