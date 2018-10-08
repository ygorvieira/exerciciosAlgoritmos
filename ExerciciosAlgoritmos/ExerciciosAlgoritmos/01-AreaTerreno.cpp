#include <iostream>

using namespace std;

int main() {

	float base, altura, area;

	cout << "Informe a base: " << endl;
	cin >> base;

	cout << "Informe a altura: " << endl;
	cin >> altura;

	area = base * altura;

	cout << "Area do terreno: " << area << " metros quadrados." << endl;

	system("PAUSE");

	return 0;
}