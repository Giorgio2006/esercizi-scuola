#include <iostream>
using namespace std;
int main ()
{
    double n, nm;
	cout << "Dimmi un numero";
	cin >> n;
	cout << "Ora dimmi i multipli che vuoi";
	cin >> nm;
	int i = 1;
	while (i < nm) {
		double multipli = n * i;
		cout << multipli;
		i++;
	return 0;
}