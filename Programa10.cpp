#include <iostream>
using namespace std;
double Varticulo, desc1, desc2, total;
int main()
{
    cout << "Ingresa el valor de tu articulo \n";
    cin >> Varticulo;

        //Descuento 1 del 20%
    desc1 = Varticulo * .20;

        //Descuento 2 del 10% adicional;
    desc2 = (Varticulo - desc1) * .10;
       
        //Total
    total = Varticulo - desc1 - desc2;

    printf("El total es:\n $ %.2f", total);

}


