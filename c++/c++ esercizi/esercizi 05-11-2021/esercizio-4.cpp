#include <iostream>
using namespace std;
int main ()
 {
	double numero, a;
	cin >> numero;
	cin >> a;
	int x = 1;
	while (a * x < numero && x > 0) {
		double multiplo = a * x;
		cout << multiplo<<endl;
		x++;
	}
	return 0;
}