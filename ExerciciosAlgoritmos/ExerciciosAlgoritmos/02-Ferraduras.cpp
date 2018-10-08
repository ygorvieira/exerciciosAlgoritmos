#include <iostream>

using namespace std;

int main() {

	int cavalos, ferraduras;

	cout << "Bem vindo ao Haras HELPDESK! Informe a quantidade de cavalos: " << endl;
	cin >> cavalos;
		
	ferraduras = cavalos * 4;

	cout << "Serao necessarias " << ferraduras << " ferraduras." << endl;

	system("PAUSE");

	return 0;
}