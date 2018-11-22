#include <iostream>
using namespace std;

int main() {
	float salarioBase, salarioComAumento, salarioFinal;
	float acrescimo = 0.15;
	float desconto = 0.08;

	cout << "Informe o salario base: " << endl;
	cin >> salarioBase;

	salarioComAumento = salarioBase + (salarioBase * acrescimo);
	salarioFinal = salarioComAumento - (salarioComAumento * desconto);

	cout << "Salario Base: R$ " << salarioBase << "\t Salario com Acrescimo: R$ " <<
		salarioComAumento << "\t Salario com desconto: R$ " << salarioFinal << endl;

	system("PAUSE");
	return 0;
}