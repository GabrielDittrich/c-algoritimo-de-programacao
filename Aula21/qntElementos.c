#include <stdio.h>
// Escreva um programa que mostre a quantidade de elementos entre 10 e 20
int main()
{
    int vetor[5];
    int i = 0, qnt = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Escreva o elemento %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] >= 10 && vetor[i] <= 20)
        {
            qnt++;
        }
    }

    printf("Existem %d números entre 10 e 20", qnt);

    return 0;
}