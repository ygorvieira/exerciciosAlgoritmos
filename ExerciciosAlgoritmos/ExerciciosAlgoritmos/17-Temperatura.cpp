#include<iostream>
using namespace std;

int main() {
	float celcius, fahrenheit;

	cout << "Informe a temperatura em Celcius: " << endl;
	cin >> celcius;

	fahrenheit = ((celcius * 9) / 5) + 32;

	cout << celcius << " graus Celcius equivalem a " << fahrenheit << " graus Fahrenheit" << endl;

	system("PAUSE");

	return 0;
}