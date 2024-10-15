#include <stdio.h>

int main()
{
    int matriz[2][3];
    int i, j, soma;

    soma = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Informe o elementro[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            soma += matriz[i][j];
        }
    }

    printf("A soma da matriz é: %d", soma);

    return 0;
}