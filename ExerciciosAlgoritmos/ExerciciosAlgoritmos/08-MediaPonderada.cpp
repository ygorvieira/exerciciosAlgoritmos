#include <iostream>
using namespace std;

int main() {

	float nota1, nota2, nota3, media;

	cout << "Informe a nota 1: " << endl;
	cin >> nota1;
	cout << "Informe a nota 2: " << endl;
	cin >> nota2;
	cout << "Informe a nota 3: " << endl;
	cin >> nota3;

	media = ((nota1) + (nota2 * 2) + (nota3 * 3)) / (1 + 2 + 3);

	cout << "A media ponderada e: " << media << endl;

	system("PAUSE");
	return 0;
}