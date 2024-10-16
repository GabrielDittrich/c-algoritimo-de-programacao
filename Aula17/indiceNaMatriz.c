#include <stdio.h>

int main()
{
    int matriz[2][3];
    int i, j;
    int num;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Insira o número [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Insira o número pra ver se tem na matriz: ");
    scanf("%d", &num);

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (matriz[i][j] == num)
            {
                printf("Indice encontrado na posição [%d][%d]", i, j);
                return 0;
            }
        }
    }

    printf("Número do indice não encontrado");
    return 0;
}