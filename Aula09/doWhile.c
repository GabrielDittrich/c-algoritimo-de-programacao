#include <stdio.h>

int main()
{
    int num, soma;

    //  Escreva um algoritimo que some todos os números apresentados pelo úsuario e pare quando aprensentar um número negativo, sem somar ele.
    do
    {
        printf("Informe um número: \n");
        scanf("%d", &num);

        soma += num;

    } while (num >= 0);
    soma = soma - num;

    printf("A soma é %d", soma);
    return 0;
}