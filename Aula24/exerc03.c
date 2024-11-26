#include <stdio.h>
// Escreva um programa que alimente uma matriz 2 x 3 com elementos inteiros informados pelo usuário.
// Em seguida, apresente o produto dos elementos da última linha da matriz.
int main()
{
    int matriz[2][3];
    int i = 0, j = 0, produto = 1;

    printf("Preencha a matriz\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Preencha a linha [%d] coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            produto = produto * matriz[1][j];
        }
    }
    printf("%d", produto);

    return 0;
}