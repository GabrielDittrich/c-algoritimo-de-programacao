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
    int menu = 0, i;
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
            printf("Qual cliente você quer depositar? ");
            scanf(" %30[^\n]", nome);

            for (i = 0; i < 3; i++)
            {
                if (strcmp(nome, conta[i].nome) == 0)
                {
                    printf("Qual valor deseja depositar: ");
                    scanf("%f", &deposito);

                    conta[i].saldo = conta[i].saldo + deposito;
                    printf("A conta %s foi depositada!", conta[i].nome);
                    break;
                }
                printf("\nA conta não foi achada");

                break;

            case 3:
                for (i = 0; i < 3; i++)
                {

                    printf("Qual cliente deseja sacar? ");
                    scanf(" %30[^\n]", nome);

                    if (strcmp(nome, conta[i].nome))
                        printf("Quanto você deseja sacar? ");
                    scanf("%f", &saque);

                    conta[i].saldo = conta[i].saldo - saque;

                    printf("Agora a sua conta tem: %.2f", conta[i].saldo);
                }
            }
        }
    } while (menu != 0);

    return 0;
}