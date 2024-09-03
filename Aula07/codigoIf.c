#include <stdio.h>

int main()
{

    int codigo;

    printf("Informe o codigo:  ");
    scanf("%d", &codigo);
    printf("\n");

    if (codigo == 110)
    {
        printf("Véstuario");
    }
    else if (codigo == 120)
    {
        printf("Eletrodomestico");
    }
    else if (codigo == 130)
    {
        printf("Informatica");
    }
    else if (codigo == 140)
    {
        printf("Livraria");
    }
    else if (codigo == 150)
    {
        printf("Artigos Esportivos");
    }
    else
    {
        printf("Codigo Invalido");
    }

    return 0;
}