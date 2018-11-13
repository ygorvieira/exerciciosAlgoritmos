#include <iostream>

using namespace std;

int main() {
	int x1, x2, y1, y2;
	float distancia;

	cout << "Informe as coordenadas do primeiro ponto : " << endl;
	cin >> x1; 
	cin >> y1;

	cout << "Informe as coordenadas do segundo ponto : " << endl;
	cin >> x2;
	cin >> y2;

	distancia = sqrt((pow((x1 - x2), 2)) + (pow((y1 - y2), 2)));

	cout << "Distancia entre os dois pontos: " << distancia << endl;

	system("PAUSE");

	return 0;
}