#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, sp, R;
    printf("Bienvenido. Calcularemos el area del triangulo.\n\n");
    printf("Introduce el primer lado: ");
    scanf("%f", &a);
    printf("Ahora, inserta el segundo lado: ");
    scanf("%f", &b);
    printf("Por ultimo, escribe el tercer lado: ");
    scanf("%f", &c);
    sp = (a + b + c) / 2;
    R = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    printf("\nEl area obtenida es %f\n\n", R);
    return 0;
}

