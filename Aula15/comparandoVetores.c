#include <stdio.h>
// Escreva um algoritmo que utilize dois vetores (A e B) para armazenar 5 números inteiros distintos cada um.
// Em seguida, apresente na tela os valores comuns aos dois vetores, ou seja, os valores que aparecem tanto no vetor A quanto no vetor B.
// Exemplo: A = [0, 3, 2, 5, 1], B = [3, 1, 4, 0, 6]. Resposta: 0, 3, 1.
int main()
{
    int vetorA[5], vetorB[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor do vetor A: ");
        scanf("%d", &vetorA[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor do vetor B: ");
        scanf("%d", &vetorB[i]);
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (vetorA[i] == vetorB[j])
            {
                printf("%d\t", vetorA[i]);
            }
        }
    }

    return 0;
}