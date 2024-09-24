#include <stdio.h>
// Escreva um programa que alimente um vetor com 5 números inteiros e apresente na tela o vetor em ordem inversa.
// Escreva um programa que alimente um vetor com 5 números inteiros. Apresente na tela apenas os valores ímpares que aparecem no vetor.
int main()
{
    int numeros[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i <= 4; i++)
    {
        printf("Vetor: %d\t", numeros[i]);
    }

    printf("\n\nEm ordem inversa:\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\t", numeros[i]);
    }

    printf("\n\nValores Pares:\n");
    for (i = 0; i < 5; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            printf("%d\t", numeros[i]);
        }
    }

    return 0;
}