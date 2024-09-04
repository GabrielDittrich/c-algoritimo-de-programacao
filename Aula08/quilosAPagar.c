#include <stdio.h>

int main()
{
    float quilos, valor_pagar, total_quilos, valor_compra, desconto;

    printf("Informe quilos de morango: ");
    scanf("%f", &quilos);

    if (quilos <= 5)
    {
        valor_pagar = quilos * 6.5;
    }
    else
    {
        valor_pagar = quilos * 6.2;
    }

    total_quilos = quilos;

    printf("Informe quilos de maça: ");
    scanf("%f", &quilos);

    if (quilos <= 5)
    {
        valor_pagar = quilos * 3.8;
    }
    else
    {
        valor_pagar = quilos * 3.5;
    }
    total_quilos = total_quilos + quilos;

    if (valor_pagar > 50 || total_quilos > 10)
    {
        printf("\nValor a pagar: %.2f", valor_pagar * 0.9);
    }
    else
    {
        printf("\nValor a pagar: %.2f", valor_pagar);
    }
    return 0;
}