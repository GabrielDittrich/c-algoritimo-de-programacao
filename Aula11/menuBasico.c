#include <stdio.h>
// Escreva um algoritmo que apresente o seguinte menu:
int main()
{
    int controle, menu = 0, num = 0;

    printf("**** MENU ****\n");
    printf("1) - Inserir: \n");
    printf("2) - Excluir: \n");
    printf("3) - Listar\n");
    printf("4) - Sair \n");

    scanf("%d", &controle);

    do
    {
        switch (controle)
        {
        case 1:
            printf("Digite um numero: \n");
            scanf("%d", &num);
            break;
        case 2:
            printf("Qual conta deseja excluir?\n");
            scanf("%d", &num);
            printf("Conta Excluida");
            break;
        case 3:
            printf("Contas Inseridas:\n");
            printf("%d", num);
            break;
        case 4:
            printf("Finalizando programa");
            break;
        default:
            printf("Número invalido");
            break;
        }
    } while (menu != 0);
}