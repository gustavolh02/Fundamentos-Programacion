#include <iostream>
using namespace std;
double cal1, cal2, cal3, cal4, promedio;
int main()
{
    cout << "Ingresa la primer calificacion" << endl;
    cin >> cal1;
    cout << "Ingresa la segunda calificacion" << endl;
    cin >> cal2;
    cout << "Ingresa la tercer calificacion" << endl;
    cin >> cal3;
    cout << "Ingresa la cuarta calificacion" << endl;
    cin >> cal4;

    //Formula para sacar el promedio
    promedio = ((cal1+cal2+cal3+cal4)/4);

    printf("Tu promedio es:\n %.2f", promedio);
    return 0;
}

