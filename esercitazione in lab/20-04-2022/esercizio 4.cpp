/*

 Creare poi un programma che si faccia passare due quantità di tempo e verifichi quale è maggiore

*/
#include <iostream>

using namespace std;

int max(int ora, int ora1){
    if (ora>ora1) return ora;
    else return ora1;
}

int main()
{
    int a=14;
    int b=30;
    int maggiore;
    maggiore= max(a, b);
    cout<<maggiore;
}