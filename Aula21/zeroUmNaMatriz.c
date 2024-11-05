#include <stdio.h>
// Escreva um programa que usando estruturas de repetição, preencha e apresente a matriz
int main()
{
    int matriz[4][4];
    int i = 0, j = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz: \n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}