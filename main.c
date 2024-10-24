#include <stdio.h>
#include <math.h>
#include "paridad.c"   
#include "operaciones.c"

int main() 
{
    int num1, num2;    
    printf("Digite primer numero:");
    scanf("%d", &num1);
    printf("Digite segundo numero:");
    scanf("%d", &num2);    
    espar(num1, num2);    
    opreciones(num1, num2);

    return 0;
}
