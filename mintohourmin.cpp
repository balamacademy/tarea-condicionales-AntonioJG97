#include <iostream>

using namespace std;

int main()
{
	
	int agno = 0;
	cin >> agno;

	if ((agno%4 == 0 && agno%100 != 0) || (agno%400 == 0))
	{
		cout << "Es bisiesto";
	}else{
		cout << "No es bisiesto";
	}


	return 0;
}