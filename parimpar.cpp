#include <iostream>

using namespace std;

int main(){
	
	int numero = 0;
	int resul = 0;
	cin >> numero;

	resul = numero % 2;

	if (resul == 0)
	{
		cout << "Numero par";
	}else{
		cout << "Numero impar";
	}




	return 0;
}