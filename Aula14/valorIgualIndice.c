#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vetor[5] = {5, -5, 37, 99, 54}, num, i;
    bool encontrado;

    encontrado = false;

    printf("Informe o número: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] == num)
        {
            printf("Valor encontrado no indice: %d", i);
            encontrado = true;
        }
    }
    if (encontrado == false)
    {
        printf("Valor no indice não encontrado");
    }
    return 0;
}

/* Sem a Variavel Boolean
#include <stdio.h>

int main()
{
    int vetor[5] = {5, -5, 37, 99, 54}, num, i;

    printf("Informe o número: ");
    scanf("%d", &num);

    for (i = 0; i < 5; i++)
    {
        if (vetor[i] == num)
        {
            printf("Valor encontrado no indice: %d", i);
            return 0;
        }
    }
    printf("Valor no indice não encontrado");
    return 0;
}

*/