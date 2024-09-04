#include <stdio.h>

int main()
{
    float litros, pagar;
    int controle;

    printf("O que o senhor deseja colocar?");

    printf("\n1 - Álcool");
    printf("\n2 - Gasolina\n");

    scanf("%d", &controle);

    switch (controle)
    {
    case 1:
        printf("Quantos litros deseja abastecer?\n");
        scanf("%f", &litros);

        if (litros <= 20)
        {
            pagar = litros * 0.03;
        }
        else
        {
            pagar = litros * 0.05;
        }
        printf("Valor R$ %.2f\n", pagar);
        break;

    case 2:
        printf("Quantos litros deseja abastecer?\n");
        scanf("%f", &litros);

        if (litros <= 20)
        {
            pagar = litros * 0.035;
        }
        else
        {
            pagar = litros * 0.06;
        }
        printf("Valor R$ %.2f\n", pagar);
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}