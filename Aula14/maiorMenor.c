#include <stdio.h>

int main()
{
    float vetor[5] = {5, -5, 3.7, 99, 54};
    int i, menor, maior;

    menor = vetor[0];
    maior = vetor[0];

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }

        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("Maior valor: %d\nMenor valor:%d\t", maior, menor);

    return 0;
}