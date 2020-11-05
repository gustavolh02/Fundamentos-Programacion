#include<iostream>
using namespace std;
int mes, dia;
int main()
{
   
    cout<<"Introduce el mes de tu nacimiento: ";
    cin>>mes;
    cout<<"\nIntroduce el dia de tu nacimiento: ";
    cin>>dia;

    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
        cout<<"\nSu signo zodiacal es: Aries.";

    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
        cout<<"\nSu signo zodiacal es: Tauro.";

    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        cout<<"\nSu signo zodiacal es: Geminis.";

    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 20))
        cout<<"\nSu signo zodiacal es: Cancer.";

    else if ((mes == 7 && dia >= 21) || (mes == 8 && dia <= 21))
        cout<<"\nSu signo zodiacal es: Leo.";

    else if ((mes == 8 && dia >= 22) || (mes == 9 && dia <= 22))
        cout<<"\nSu signo zodiacal es: Virgo.";

    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        cout<<"\nSu signo zodiacal es: Libra.";

    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 22))
        cout<<"\nSu signo zodiacal es: Escorpio.";
 
    else if ((mes == 11 && dia >= 23) || (mes == 12 && dia <= 20))
        cout<<"\nSu signo zodiacal es: Sagitario";

    else if ((mes == 12 && dia >= 21) || (mes == 1 && dia <= 19))
        cout<<"\nSu signo zodiacal es: Capricornio.";

    else if ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        cout<<"\nSu signo zodiacal es: Acuario.";

    else if ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        cout<<"\nSu signo zodiacal es: Picis.";

    return 0;
}
//Referencias de fecha de cada signo: https://estilonext.com/estilo-de-vida/horoscopo-fechas