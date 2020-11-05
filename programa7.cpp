#include <iostream>
using namespace std;
float dolar=21.23, euro=24.95, pesos, cambio1, cambio2;
int main()
{
    cout << "Ingresa la cantidad de pesos a convetir" << endl;
    cin >> pesos;
    
    //Formula pesos a dolares
    cambio1 = (pesos / dolar); 
    //Formula pesos a euros
    cambio2 = (pesos / euro);

    printf ( "La cantidad de dolares es:\n $ %.2f", cambio1);
    printf ( "\n La cantidad de euros es:\n $ %.2f", cambio2);
    return 0;
}

