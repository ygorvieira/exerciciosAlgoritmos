#include <iostream>

using namespace std;

int main() {

	float precoPorLitro, totalAbastecido, precoAbastecimento;

	cout << "Informe o preco por litro: R$ " << endl;
	cin >> precoPorLitro;

	cout << "Informe o valor pago: R$ " << endl;
	cin >> precoAbastecimento;

	totalAbastecido = precoAbastecimento / precoPorLitro;

	cout << "Voce abasteceu " << totalAbastecido << " litros." << endl;

	system("PAUSE");
	return 0;
}