#include <iostream>

using namespace std;

int main(){
	

	int unidades = 0;
	int precio = 0;
	int descuento = 0;
	int precio_bruto = 0;

	cin >> unidades;
	cin >> precio;

	int iva = (precio * unidades) * 0.15;
	precio_bruto = (precio * unidades)+iva;

	if (precio_bruto > 1000)
	{
		descuento = precio_bruto * 0.05;
		precio_bruto = precio_bruto - descuento;
		cout << "Pagar $" <<precio_bruto;
	}else{
		cout << "Pagar $" <<precio_bruto;
	}

	return 0;
}