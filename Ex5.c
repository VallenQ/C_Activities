#include <stdio.h>

int main()
{
    int num1, num2, div, resto;
    float real;
    printf("Insira dois números inteiros: ");
    scanf("%d%d", &num1, &num2);
    
    real = (float)num1 / num2;

    printf("\nA divisão real do primeiro pro segundo número é: %.2f", real);

    div = num1/num2;

    printf("\nA divisão inteira do primeiro pro segundo número é: %d", div);

    resto = num1%num2;

    printf("\nO resto da divisão do primeiro pro segundo número é: %d", resto);

    return 0;
}