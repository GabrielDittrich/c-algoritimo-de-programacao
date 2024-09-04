#include <stdio.h>

int main()
{
    int idade, homem_mais_novo, homem_mais_velho, mulher_mais_nova, mulher_mais_velha;

    printf("Informe a idade do primeiro homem: \n");
    scanf("%d", &homem_mais_novo);

    printf("Informe a idade do segundo homem: \n");
    scanf("%d", &idade);

    if (idade < homem_mais_novo)
    {
        homem_mais_velho = homem_mais_novo;
        homem_mais_novo = idade;
    }
    else
    {
        homem_mais_velho = idade;
    }

    printf("Informe a idade da primeira mulher: \n");
    scanf("%d", &mulher_mais_nova);

    printf("Informe a idade da segunda mulher: \n");
    scanf("%d", &idade);

    if (idade < mulher_mais_nova)
    {
        mulher_mais_velha = mulher_mais_nova;
        mulher_mais_nova = idade;
    }
    else
    {
        mulher_mais_velha = idade;
    }

    printf("O homem mais velho tem: %d", homem_mais_velho);
    printf("\nA mulher mais nova tem %d", mulher_mais_nova);
    printf("\nA soma do homem mais velho com a mulher mais nova dá: %d", homem_mais_velho + mulher_mais_nova);

    return 0;
}