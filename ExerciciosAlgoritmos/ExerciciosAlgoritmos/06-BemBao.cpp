#include <iostream>

using namespace std;

int main() {

	float precoPorQuilo = 12.0;
	float pesoDoPrato, totalAPagar;

	cout << "Informe o peso do prato (Kg): " << endl;
	cin >> pesoDoPrato;

	totalAPagar = pesoDoPrato * precoPorQuilo;

	cout << "Valor da refeicao: R$ " << totalAPagar << endl;

	system("PAUSE");
	return 0;
}