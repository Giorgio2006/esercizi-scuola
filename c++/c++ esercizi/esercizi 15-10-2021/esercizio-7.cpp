#include <iostream>
using namespace std;
int main () {
    int n, n1, n2;
    cin >> n;
    cin >> n1;
    cin >> n2;
    if (n != 0 && n1 % n == 0 && n2 % n == 0){
        cout<<"Il  numero è divisore";
    } else {
        cout<<"Il numero non è divisore";
    }
}