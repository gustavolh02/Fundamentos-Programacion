#include<iostream>
using namespace std;
int a, b, c, mayor=0;

int main()
{
	cout << "Introduce el primer valor: ";
	cin >> a;
	cout << "Introduce el segundo valor: ";
	cin >> b;
	cout << "Introduce el tercer valor: ";
	cin >> c;
	mayor = a;
	if (b>mayor)
	{
		mayor = b;
	}
	if (c>mayor)
	{
		mayor = c;
		cout << mayor << endl;
	}
	else
	{
		cout << "Los numeros son iguales";
	}
	return 0;
}