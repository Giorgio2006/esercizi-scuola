#include <iostream>
using namespace std;

int main() {
	int angolo1, angolo2, angolo3, angolototale;
	cout << " i tre angoli e io ti determiner� che tipo di triangolo hai davanti!!" << endl;
	cin >> angolo1;
	cin >> angolo2;
	cin >> angolo3;
	angolototale = angolo1 + angolo2 + angolo3;
	if (angolo1 == 90 or angolo2 == 90 or angolo3 == 90 && angolototale == 180) {
			cout << "Il  triangolo � rettangolo";
		}
	else if (angolo1 == 60 && angolo2 == 60 && angolo3 == 60) {
			cout << "Il triangolo � equiangolo";
		}
	else if (angolo1 < 90 && angolo2 < 90 && angolo3 < 90 ) {
			cout << "Il  triangolo �  acuto";
		}
	else if (angolo1 > 90 or angolo2 > 90 or angolo3 > 90) {
		cout << "Il triangolo � ottuso";
		}

	return 0;
}