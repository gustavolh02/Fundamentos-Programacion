#include<iostream>
using namespace std;
	int main() {
	float base_mayor, base_menor, altura, area;

	cout << "Ingresa el valor de la Base mayor:" << endl;
		cin >> base_mayor;
		cout << "Ingresa el valor de la Base menor:" << endl;
		cin >> base_menor;
		cout << "Ingresa el valor de la Altura" << endl;
		cin >> altura;

		//Formula para el area
		area = ((base_mayor + base_menor) * altura) / 2;
		cout << "El area es: " << area;
		return 0;
}


