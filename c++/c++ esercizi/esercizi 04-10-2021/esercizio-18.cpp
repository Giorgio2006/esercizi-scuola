#include <iostream>
using namespace std;
int main()
{
    int dollaro,sterline,euro;
    cout<<"un signore possiede 1,75$ e 2,80£. Quanto sono in euro "<<endl;
    dollaro=(1.75*1.514);
    sterline=(2.80*2.52);
    euro=dollaro+sterline;
    cout<<"in totale ha ";
    cout<<euro;
    return 0;
}