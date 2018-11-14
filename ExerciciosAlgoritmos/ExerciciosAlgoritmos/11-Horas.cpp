#include <iostream>
using namespace std;

int main() 
{
	int DiasNoMes = 30;
	int DiasSemAcidente;
	int QtdAnos, QtdMeses, QtdDias;

	cout << "Digite a quantidade de dias sem acidentes: " << endl;
	cin >> DiasSemAcidente;

	QtdAnos = DiasSemAcidente / DiasNoMes / 12;
	QtdMeses = DiasSemAcidente / DiasNoMes - QtdAnos * 12;
	QtdDias = DiasSemAcidente % DiasNoMes;

	cout << "Total: " << QtdAnos << " anos e " << QtdMeses << " meses e " << QtdDias << " dias.";

	system("PAUSE");
	return 0;
}