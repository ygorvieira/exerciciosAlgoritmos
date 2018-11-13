#include <iostream>

using namespace std;

int main()
{
	float camisa_p = 10;
	float camisa_m = 12;
	float camisa_g = 15;
	int quantidade_p, quantidade_m, quantidade_g;
	float valor;

	cout << "Informe a quantidade de camisetas tamanho P:" << endl;
	cin >> quantidade_p;

	cout << "Informe a quantidade de camisetas tamanho M:" << endl;
	cin >> quantidade_m;

	cout << "Informe a quantidade de camisetas tamanho G:" << endl;
	cin >> quantidade_g;

	valor = (camisa_p * quantidade_p) + (camisa_m * quantidade_m) + (camisa_g * quantidade_g);

	cout << "O valor total a ser pago eh de " << valor << " R$." << endl;

	system("PAUSE");
	return 0;
}
