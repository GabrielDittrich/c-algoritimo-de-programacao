#include <stdio.h>

// Escreva um algoritmo que receba um número inteiro positivo e escreva a sequência de números de Fibonacci.
int main()
{
    int atual = 1, anterior = 1, aux = 0;

    printf("Insira o número maximo do Fibonacci: ");
    scanf("%d", &aux);

    for (int i = 0; atual < aux; i++)
    {
        atual = atual + anterior;
        anterior = atual - anterior;
        printf("%d\t", atual);
    }
    return 0;
}