#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	
	int agno_actual = 0;
	int agno_aleatorio = 0;
	int calculo = 0;

	cin >> agno_actual;
	cin >> agno_aleatorio;


	calculo = abs(agno_actual - agno_aleatorio);

	if (agno_actual > agno_aleatorio)
	{
		cout << "Han pasado " << calculo << " agnos";
	}else{
		cout << "Faltan " << calculo << " agnos";
	}

	return 0;
}