#include <iostream>

using namespace std;

int main() {

	float precoPao = 0.12;
	float precoBroa = 1.5;
	float valorTotal, poupanca;
	int quantidadePaes, quantidadeBroas;

	cout << "Informe a quantidade de PAES vendidos: " << endl;
	cin >> quantidadePaes;

	cout << "Informe a quantidade de BROAS vendidas: " << endl;
	cin >> quantidadeBroas;

	valorTotal = (quantidadePaes * precoPao) + (quantidadeBroas * precoBroa);
	poupanca = valorTotal * 0.1;

	cout << "O valor total de paes e broas vendidos foi R$ " << valorTotal << "." << endl;
	cout << "O valor total a poupar no dia e de R$ " << poupanca << "." << endl;

	system("PAUSE");

	return 0;
}