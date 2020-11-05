#include <stdio.h>
int main() {

    int X, Y, Z;  // declarar 3 variables de tipo entero(números)

    printf("Por favor, introduzca un numero:  ");
    scanf("%d", &X);
    printf("Ahora, inserte otro:  ");
    scanf("%d", &Y);
    Z = X + Y;
    printf("\n El resultado es %d\n", Z);
    return 0;
}

