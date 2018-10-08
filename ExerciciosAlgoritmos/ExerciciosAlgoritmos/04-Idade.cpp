#include <iostream>

using namespace std;

int main() {

	int anos, totalDias;

	cout << "Informe sua idade em anos: " << endl;
	cin >> anos;

	totalDias = anos * 365;

	cout << "Voce viveu " << totalDias << " dias." << endl;

	system("PAUSE");
	return 0;
}