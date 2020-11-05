#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;
float base, n, resultado;
int main() {
	cout << "Ingrese la base: " <<endl;
	cin >> base;
	cout << "Ingrese el exponente: " << endl;
	cin >> n;
	resultado = pow(base, n);

	printf("\nEl resultado es: %f\n\n", resultado);
	return 0;
}
