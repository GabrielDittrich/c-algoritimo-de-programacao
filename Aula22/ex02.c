#include <stdio.h>
// Escreva um programa que alimente manualmente um vetor de 10 elementos inteiros.
// Em seguida, solicite um número ao usúario e apresente quantas vezes o número informado
// aparece no vetor
int main()
{
    int vetor[10] = {1, 2, 2, 4, 5, 6, 6, 9, 9, 9};
    int i = 0, num1 = 0, qnt = 0;

    printf("Insira um numero para ver quantas vezes ele aparece no vetor: ");
    scanf("%d", &num1);

    for (i = 0; i < 10; i++)
    {
        if (vetor[i] == num1)
        {
            qnt++;
        }
    }

    printf("O número apresentado pelo úsuario aparece %d vezes", qnt);

    return 0;
}