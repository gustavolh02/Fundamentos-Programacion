#include <iostream>
using namespace std;
double metros, centimetros, decimetros, milimetros;
int  main()
{
	cout << "Cual es la medida en metros" << endl;
	cin >> metros;

	//Formula metros-centimetros
	centimetros = metros * 100;

	//Formula metros-decimetros
	decimetros = metros * 10;

	//Formula metros-milimetros
	milimetros = metros * 1000;

	printf("La medida en centimetros es:\n  %.0f", centimetros); printf(" cm");
	printf("\n La medida en decimetros es:\n  %.0f", decimetros); printf(" dm");
	printf("\n La medida en milimetros es:\n  %.0f", milimetros); printf(" ml");

	return 0;
}

