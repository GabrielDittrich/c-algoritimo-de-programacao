#include <stdio.h>
// Escreva uma função que retorne o maior valor entre três números inteiros
int maior(int num1, int num2, int num3)
{

    int maior = num1;

    if (num2 > maior)
    {
        maior = num2;
    }

    if (num3 > maior)
    {
        maior = num3;
    }

    return maior;
}

int main()
{
    int num1, num2, num3;

    printf("Insira o primeiro número: ");
    scanf("%d", &num1);

    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    printf("Insira o terceiro número: ");
    scanf("%d", &num3);

    printf("\nO maior número é %d", maior(num1, num2, num3));
}