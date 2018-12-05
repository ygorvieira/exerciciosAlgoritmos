#include<iostream>

using namespace std;

int main() {
	float valorCarlos, valorAndre, valorFelipe, 
		totalConta, centavosCarlos, centavosAndre;

	cout << "Informe o valor todal da conta: " << endl;
	cin >> totalConta;

	valorAndre = totalConta / 3;
	centavosAndre = valorAndre - floor(valorAndre);
	valorCarlos = totalConta / 3;
	centavosCarlos = valorCarlos - floor(valorCarlos);
	valorFelipe = (totalConta/3) + centavosAndre + centavosCarlos;

	valorAndre = (int)valorAndre;
	valorCarlos = (int)valorCarlos;

	cout << "Valor do Carlos: R$" << valorCarlos << "\tValor do Andre: R$ " << valorAndre <<
		"\tValor do Felipe: R$" << valorFelipe << endl;
	
	system("PAUSE");
	return 0;


}