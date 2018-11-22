#include <iostream>
using namespace std;

int main() {
	float raio, area;
	float pi = 3.14;

	cout << "Digite o raio da pizza (cm2): " << endl;
	cin >> raio;

	area = pi * (raio * raio);

	cout << "Area da pizza: " << area << "cm2" << endl;

	system("PAUSE");
	return 0;
}