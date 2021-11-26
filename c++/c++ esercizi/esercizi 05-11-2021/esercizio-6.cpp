#include <iostream>
using namespace std;
int main ()
{
    double n;
	cout << "Inserie un numero";
	cin >> n;
	int i=1;
	while (i<11) {
		double multipli = n*i;
		cout<<multipli;
		i++;
	}
	return 0;  
}