#include <iostream>

using namespace std;

int main()
{
	int numerador = 0;
	int denominador = 0;
	int resultado = 0;

	cin >> numerador;
	cin >> denominador;

	resultado = numerador % denominador;

	if (resultado == 0)
	{
		cout << "La division es exacta";
	}else{
		cout << "La division NO es exacta";
	}


	return 0;
}