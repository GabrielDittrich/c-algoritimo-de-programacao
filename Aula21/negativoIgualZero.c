#include <stdio.h>
// Substitua os elementos negativos por 0 e apresendo o vetor atualizado
int main()
{
    int vetor[5];
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o elemento %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
    }
    printf("Vetor atualizado: ");

    for (i = 0; i < 5; i++)
    {

        printf("\t%d", vetor[i]);
    }

    return 0;
}