#include <stdio.h>
// Mostre o maior e o menor elemento do vetor
int main()
{
    int vetor[5];
    int i = 0, maior = 0, menor;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o elemento %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);

        maior = vetor[0];
        menor = vetor[0];

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
        else
        {
        }
    }
    printf("Maior numero do vetor: %d ", maior);
    printf("\nMenor numero do vetor: %d ", menor);

    return 0;
}