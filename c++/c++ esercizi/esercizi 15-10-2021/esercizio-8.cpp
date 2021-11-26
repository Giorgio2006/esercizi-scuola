#include <iostream>
using namespace std;
int main (){
    int n; 
    cout << "Dammi un numero e ti dirò se la sua potenza è pari o dispari ";
    cin >> n;
    if (n % 2 == 0){
            cout << "Il  numero è pari anche se si fa la potenza ";
        
        } else {
            cout << "Il  numero è dispari anche se si fa la potenza ";
        }
}