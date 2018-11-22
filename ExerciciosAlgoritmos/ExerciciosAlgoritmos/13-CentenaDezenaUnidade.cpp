#include <iostream>
using namespace std;

int main() {
	int numero, centena, dezena, unidade;

	cout << "Insira o numero: " << endl;
	cin >> numero;

	centena = numero / 100;
	dezena = (numero % 100) / 10;
	unidade = ((numero % 100) % 10);

	cout << "Centena: " << centena << "\t Dezena: " << dezena
		<< "\t Unidade: " << unidade << endl;

	system("PAUSE");
	return 0;
}