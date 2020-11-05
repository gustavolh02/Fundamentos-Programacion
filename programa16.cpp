#include<iostream>
using namespace std;
int mes, dia;
int main()
{

    cout << "Introduce el mes : ";
    cin >> mes;
    cout << "\nIntroduce el dia : ";
    cin >> dia;

    if ((mes == 3 && dia >= 21) || (mes == 6 && dia <= 20))
        cout << "\nLa estacion del year es: Primavera.";

    else if ((mes == 6 && dia >= 21) || (mes == 9 && dia <= 21))
        cout << "\nLa estacion del year es: Verano.";

    else if ((mes == 9 && dia >= 22) || (mes == 12 && dia <= 20))
        cout << "\nLa estacion del year es: Otono";

    else if ((mes == 12 && dia >= 21) || (mes == 3 && dia <= 20))
        cout << "\nLa estacion del year es: Invierno.";

    return 0;
}
//Referencia de fechas de cada estacion: https://www.calendarr.com/mexico/estaciones-del-ano/
