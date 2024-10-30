#include <stdio.h>
#include <string.h>

struct Conta
{
    int numeroConta;
    char nome[31];
    float saldo;
};

int main()
{
    struct Conta conta[3] = {{1, "Gabriel", 0}, {2, "Marcelo", 0}, {3, "Joao", 0}};

    int menu = 0, i, verificado = 0;
    char nome[31];
    float deposito = 0, saque = 0;

    do
    {
        printf("\n**** Menu ****");
        printf("\n");
        printf("1 - Listar os clientes\n");
        printf("2 - Depositar\n");
        printf("3 - Saque\n");
        printf("4 - Sair\n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Clientes:\n ");
            for (i = 0; i < 3; i++)
            {
                printf("\nO cliente %s está com %.2f de saldo", conta[i].nome, conta[i].saldo);
            }
            break;

        case 2:
            printf("\nQual cliente você quer depositar? ");
            scanf(" %30[^\n]", nome);
            verificado = 0;

            for (i = 0; i < 3; i++)
            {
                if (strcmp(nome, conta[i].nome) == 0)
                {
                    verificado = 1;
                    printf("\nQual valor deseja depositar: ");
                    scanf("%f", &deposito);

                    conta[i].saldo += deposito;
                    printf("\nA conta foi depositada!", conta[i].nome);
                    break;
                }
            }
            if (!verificado)
            {
                printf("\nA conta não foi encontrada");
            }
            break;
        case 3:
            printf("\nQual cliente deseja sacar? ");
            scanf(" %30[^\n]", nome);
            verificado = 0;

            for (i = 0; i < 3; i++)
            {
                if (strcmp(nome, conta[i].nome) == 0)
                {
                    verificado = 1;
                    printf("\nQuanto deseja sacar? ");
                    scanf("%f", &saque);

                    if (conta[i].saldo >= saque)
                    {

                        conta[i].saldo = conta[i].saldo - saque;
                        printf("\nSaque realizado!");
                        printf("\nAgora a sua conta tem: %.2f", conta[i].saldo);
                    }
                    else
                    {
                        printf("\nValor do saque maior que o saldo na conta");
                    }
                    break;
                }
            }
            if (!verificado)
            {
                printf("\nConta não foi encontrada");
            }
            break;
        case 4:
            printf("Finalizando Programa...");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }

    while (menu != 4);

    return 0;
}