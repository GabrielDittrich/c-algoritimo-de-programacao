#include <stdio.h>
// Escreva um programa que preencha uma matriz 2 x 3 com elementos informados pelo usúario.
// Em seguida, apresente o menor e o maior elemento da matriz
int main()
{
    int matriz[2][3];
    int i = 0, j = 0;
    int menor, maior;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("Insira o número da coluna [%d] e linha [%d]: ", j + 1, i + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    menor = matriz[0][0];
    maior = matriz[0][0];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (menor > matriz[i][j])
            {
                menor = matriz[i][j];
            }
            else if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("Maior número : %d \nMenor número %d", maior, menor);
    printf("\nTodos os números do vetor: \n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}