#include <iostream>

using namespace std;

int main()
{
	float hora_normal = 10.00;
	float hora_extra = 15.00;
	float salarioBruto, salarioLiquido, horaTrabalhadaNormal, horaTrabalhadaExtra;

	cout << "Quantas horas voce trabalhou esse mes?" << endl;
	cin >> horaTrabalhadaNormal;

	cout << "Quantas horas extras voce fez esse mes?" << endl;
	cin >> horaTrabalhadaExtra;

	salarioBruto = (hora_normal*horaTrabalhadaNormal) + (hora_extra*horaTrabalhadaExtra);

	salarioLiquido = salarioBruto - (salarioBruto * 10 / 100);

	cout << "O seu salario bruto e de R$ " << salarioBruto << " e seu salario liquido e de R$ " 
		<< salarioLiquido << endl;

	system("PAUSE");
	return 0;
}
