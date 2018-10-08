#include <iostream>
using namespace std;

int main() {
	
	int diaAtual, mesAtual, diasPassados;

	cout << "Informe o numero do dia atual: " << endl;
	cin >> diaAtual;

	cout << "Informe o numero do mes atual: " << endl;
	cin >> mesAtual;

	diasPassados = ((mesAtual - 1) * 30) + diaAtual;

	cout << "Passaram-se " << diasPassados << " dias neste ano." << endl;

	system("PAUSE");
	return 0;
}