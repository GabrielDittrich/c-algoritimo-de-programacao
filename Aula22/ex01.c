#include <stdio.h>
// Escreva um programa que preencha um vetor com 5 elementros informados pelo usúario.
// Em seguida, substitua os elementos negativos por 0 e apresente o vetor atualizado na tela
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