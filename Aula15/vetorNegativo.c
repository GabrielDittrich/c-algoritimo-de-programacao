#include <stdio.h>
// Escreva um programa que leia um vetor X de 10 elementos inteiros.
// A seguir copie todos os valores negativos de vetor X para o vetor R , sem deixar elementos vazios entre os valores copiados.
// Por fim, apresente os elementos do vetor R na tela.
int main()
{
    int x[10], r[10];
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        printf("Insira os valores: ");
        scanf("%d", &x[i]);
        if (x[i] < 0)
        {
            r[j] = x[i];
            j++;
        }
    }
    printf("Apresentação dos elementos do vetor R na tela ");

    for (i = 0; i < j; i++)
    {
        printf("\n%d", r[i]);
    }

    return 0;
}