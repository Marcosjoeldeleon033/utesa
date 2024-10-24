#include <stdio.h>
#include <math.h>

void opreciones(int num1, int num2) 
{
    printf("Suma: %d\n", num1 + num2);
    printf("Resta: %d\n", num1 - num2);
    printf("Multiplicacion: %d\n", num1 * num2);

    if (num2 != 0) 
    {
        printf("Division: %.2f\n", (float) num1 / num2);
        printf("Modulo: %d\n", num1 % num2);
    }
    else 
        printf("No se puede dividir por cero.\n");
    
    printf("Seno de %d: %.2f\n", num1, sin(num1));
    printf("Coseno de %d: %.2f\n", num1, cos(num1));
}
