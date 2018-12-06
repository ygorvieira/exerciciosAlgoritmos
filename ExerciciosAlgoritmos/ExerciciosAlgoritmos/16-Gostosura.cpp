#include<iostream>

using namespace std;

int main() {
	int quantidade;
	float queijo, presunto;

	cout << "Informe a quantidade de sanduiches: " << endl;
	cin >> quantidade;

	queijo = (100 * quantidade) / 1000.00;
	presunto = (50 * quantidade) / 1000.00;

	cout << "Serao necessarios " << queijo << "Kg de queijo e " << presunto 
			<< "Kg de presunto." << endl;

	system("PAUSE");
	return 0;
}