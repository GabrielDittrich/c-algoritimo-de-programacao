#include <stdio.h>
// Escreva um programa que o usuario forneça os elementros de uma matriz 2 x 3
// e apresente o produto da ultima colua da matriz
int main()
{
    int matriz[2][3];
    int i = 0, j = 0, produto = 1;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o elemento da linha %d e coluna %d da matriz: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nProduto da ultima coluna: ");
    for (i = 0; i < 2; i++)
    {
        produto *= matriz[i][2];
    }
    printf("%d", produto);

    printf("\nMatriz completa: \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}