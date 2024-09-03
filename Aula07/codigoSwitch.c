// Online C compiler to run C program online
#include <stdio.h>

int main()
{

    int codigo;

    printf("Informe codigo:  ");
    scanf("%d", &codigo);
    printf("\n");

    switch (codigo)
    {
    case 110:
        printf("Véstuario");
        break;
    case 120:
        printf("Eletrodomestico");
        break;
    case 130:
        printf("Informatica");
        break;
    case 140:
        printf("Livraria");
        break;
    case 150:
        printf("Artigos esportivos");
        break;
    }

    return 0;
}