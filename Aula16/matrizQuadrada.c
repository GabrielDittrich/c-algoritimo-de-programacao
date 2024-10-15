#include <stdio.h>

int main()
{
    int matriz[3][3] = {{1, 2, 17}, {3, 4, 5}, {6, 7, 8}};
    int i, j;
    int soma_principal = 0, soma_secundaria = 0;
    int soma_ultima_linha = 0;

    for (i = 0; i < 3; i++)
    {
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][2 - i];
        soma_ultima_linha += matriz[2][i];
    }

    printf("A soma da diagonal principal da matriz é: %d", soma_principal);
    printf("\nA soma da diagonal secundaria da matriz é %d", soma_secundaria);
    printf("\nA soma da ultima linha é %d", soma_ultima_linha);
    return 0;
}