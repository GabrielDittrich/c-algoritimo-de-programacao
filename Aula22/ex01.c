#include <stdio.h>

int main()
{
    int vetor[5];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o vetor número %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }

    printf("Números dos vetores trocando o negativo por 0:\n ");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", vetor[i]);
    }
    return 0;
}