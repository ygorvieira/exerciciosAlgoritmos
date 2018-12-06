#include<iostream>

using namespace std;

int main() {
	int quantidade;
	float queijo, presunto, carne;

	cout << "Informe a quantidade de sanduiches: " << endl;
	cin >> quantidade;

	queijo = (50 * quantidade) / 1000.00;
	presunto = (50 * quantidade) / 1000.00;
	carne = (100 * quantidade) / 1000.00;

	cout << "Serao necessarios " << queijo << "Kg de queijo, " << presunto 
			<< "Kg de presunto e " << carne << "Kg de carne para fazer os sanduiches." << endl;

	system("PAUSE");
	return 0;
}