#include<iostream>            
#include<math.h>
using namespace std;
float a, b, c, x, x1, x2;
int main()
{
    cout << "Ingresa el valor para a: ";
    cin >> a;
    cout << "Ingresa el valor para b: ";
    cin >> b;
    cout << "Ingresa el valor para c: ";
    cin >> c;
    x = (b * b) - 4 * a * c;
    if (x<0)
    {
        cout << "\nLa ecuacion no tiene solucion\n";
        return 0;
    }
    else
    {
        x1 = (-b + sqrt(x)) / (2 * a);
        x2 = (-b - sqrt(x)) / (2 * a);
    }
    cout << "\nEl valor para x1 es: " << x1;
    cout << "\nEl valor para x2 es: " << x2<<"\n";

    return 0;
}
