/******************************************************************************
Es 2. Memorizzare in un array di numeri casuali compresi tra zero e nove, 
stamparne il contenuto e dire quanti zeri sono memorizzati all’interno dell’array.
*******************************************************************************/

#include <iostream>
#include <time.h>
using namespace std;

int main(){
    
    srand (time(NULL));
    int v1 = rand() % 10; 
    cout<<v1;
    
    return 0;
}
