#include<stdio.h>


int soma(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("\nA soma dos inteiros e: %d", result);
    return 0;
}

int main()
{
    int num1, num2;
    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &num1,&num2);
    soma(num1,num2);

    return 0;
}