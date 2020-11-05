#include <iostream>
using namespace std;
int edad;
int main()
{
    cout << "Cual es tu edad? ";
    cin >> edad;
    if (edad <= 17)
    {
        cout << "Eres menor de edad, aun no puedes votar.\n";
    }
    else
    {
        if (edad >= 18)
            cout << "\n Eres mayor de edad. \n";
        cout << "Ya puedes votar, elige bien :v \n";
    }
    return 0;
}