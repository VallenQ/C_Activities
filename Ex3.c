#include<stdio.h>


float media(float nota1, float nota2)
{
    float simples = (nota1 + nota2)/2;
    printf("\nA media simples e: %.2f \n", simples);
    return 0;
}
int main()
{
    float nota1, nota2;

    printf("Digite 2 notas para calcular a media simples: \n");
    scanf("%f %f", &nota1, &nota2);

    media(nota1, nota2);

    return 0;
}