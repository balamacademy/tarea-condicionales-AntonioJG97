#include <iostream>

using namespace std;

int main(){
	
	int edad = 0;
	cin >> edad;

	if(edad > 18){

		cout << "Paga $10";

	}else{
		if (edad >= 4 && edad <= 18)
		{
			cout << "Paga $5";
		}else{
			cout << "¡¡Gratis!!";
		}
	}


	return 0;
}