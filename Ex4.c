#include<stdio.h>

int main()
{
    char nome[50];
    float nota1, nota2, result;

    printf("\nDigite o nome do aluno: ");
    scanf("%s", nome);

    printf("\nDigite 2 notas para calcular a media simples: \n");
    scanf("%f %f", &nota1, &nota2);

    result = (nota1+nota2)/2;

    printf("\n%s obteve %.2f de media\n", nome, result);
    
    return 0;
}