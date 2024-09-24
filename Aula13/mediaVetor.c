#include <stdio.h>
// Escreva um programa que alimente um vetor com 5 números e calcule a média destes valores. Na sequência, apresente na tela os valores que são iguais ou superiores à média.
int main()
{
    int vetor[5], i, total = 0;

    for (i = 0; i <= 4; i++)
    {
        printf("Informe a %d nota: ", i + 1);
        scanf("%d", &vetor[i]);
        total += vetor[i];
    }
    total = total / 5;
    printf("A média é: %d", total);

    for (i = 0; i <= 4; i++)
    {
        if (total <= vetor[i])
        {
            printf("\nNotas maiores da média total: %d", vetor[i]);
        }
    }
    return 0;
}