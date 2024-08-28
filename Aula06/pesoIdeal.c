#include <stdio.h>

int main()
{
    char genero;
    float altura, peso_ideal;

    printf("Informe o gênero (M para Masculino, F para Feminino): ");
    scanf(" %c", &genero);

    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);

    if (genero == 'M' || genero == 'm')
    {
        peso_ideal = 72.7 * altura - 50;
    }
    else if (genero == 'F' || genero == 'f')
    {
        peso_ideal = 62.1 * altura - 40.7;
    }
    else
    {
        printf("Gênero inválido. Informe 'M' para Masculino ou 'F' para Feminino.\n");
        return 0;
    }

    printf("Peso ideal: %.2f\n", peso_ideal);

    return 0;
}
