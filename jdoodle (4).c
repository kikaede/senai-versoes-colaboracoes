#include<stdio.h>

int main()
{
    int num1;
    float num2;
    float resultado;

    
    printf("Digite o primeiro número \n");
    
    scanf ("%i", &num1);
    
    printf("Digite o segundo número \n");
    
    scanf ("%f", &num2);
    
    resultado = num1 / num2;
    
    printf("O resultado é = %f\n", resultado);
    return 0;
}