#include <stdio.h>
// Modifique a função "linha" da atividade anterior
//  de tal forma que a quantidade de asteriscos seja um argumento da mesma.
void linha(int qnt)
{

    int i;
    for (i = 0; i < qnt; i++)
    {
        printf("*");
    }
}

int main()
{
    int i;

    linha(20);

    printf("\n");
    printf("Número de 1 a 5:");
    printf("\n");

    linha(20);
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", i + 1);
    }

    printf("\n");
    linha(10);

    return 0;
}