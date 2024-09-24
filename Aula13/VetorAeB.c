#include <stdio.h>
// Escreva um programa que alimente um vetor A com 5 números inteiros.
// Em um vetor B, armazene o dobro de cada um dos números vetor A e apresente o vetor B na tela
int main()
{
    int vetorA[5], vetorB[5], i;

    for (i = 0; i <= 4; i++)
    {
        printf("Informe o %dº número: ", i + 1);
        scanf("%d", &vetorA[i]);
        vetorB[i] = vetorA[i] * 2;
    }

    for (i = 0; i <= 4; i++)
    {
        printf("\nVetor A: %d\t", vetorA[i]);
        printf("Vetor B: %d\n", vetorB[i]);
    }
    return 0;
}