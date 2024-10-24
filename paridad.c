#include <stdio.h>

void espar(int num1, int num2) 
{    
    if (num1 % 2 == 0) 
        printf("Numero1 (%d) es Par\n", num1);
     else 
        printf("Numero1 (%d) es Impar\n", num1);    

    if (num2 % 2 == 0) 
        printf("Numero2 (%d) es Par\n", num2);
     else 
        printf("Numero2 (%d) es Impar\n", num2);    
}