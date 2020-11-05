#include <iostream>
using namespace std;
const double dolar = 21.00;
const double euro = 24.57;
double cantidad, result;
char resp;

int main()
{
	cout << "\nTeclee D para convertir a Dolares y E para convertir a Euros ";
	cin >> resp;
	cout << "Introduce la cantidad: ";
	cin >> cantidad;
	if (resp=='D')
	{
		result = cantidad / dolar; 

	}
	else
	{
		result = cantidad / euro;
	}
	cout <<"$"<< cantidad << " equivale a $" << result << endl;
	return 0;
}
