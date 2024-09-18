#include <stdio.h>
// A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS.
// Escreva um algoritmo para ler o número de gols marcados pelo Inter, o número de gols marcados pelo GRÊMIO em um GRENAL,
// imprimindo o nome do time vitorioso ou a palavra EMPATE. Logo após escrever a mensagem "Novo GRENAL (S/N)?" e solicitar uma resposta.
int main()
{
    int gremio = 0, inter = 0;
    int pts_gremio = 0, pts_inter = 0, empate = 0, total = 0;
    int controle = 1;
    do
    {
        printf("Quantos gols o Grêmio marcou?\n");
        scanf("%d", &gremio);

        printf("Quantos gols o Inter marcou?\n");
        scanf("%d", &inter);

        if (gremio >= inter)
        {
            printf("\nGrêmio Ganhou!");
            pts_gremio++;
        }
        else if (inter >= gremio)
        {
            printf("\nInter Ganhou!");
            pts_inter++;
        }
        else
        {
            printf("\nEmpate");
            empate++;
        }
        printf("\nContinuar o Programa?\n1 - Sim \n0 - Não\n");
        scanf("%d", &controle);
        printf("\n");
    } while (controle != 0);

    total = pts_gremio + pts_inter;
    printf("\nTeve %d Grenal na estatística\n", total);
    printf("\nO Inter Ganhou %d vezes", pts_inter);
    printf("\nO Grêmio Ganhou %d vezes", pts_gremio);
    printf("\nTeve %d empates\n", empate);
    printf("\nContando todas as partidas\nGrêmio fez %d gols\nInter fez %d gols.", gremio, inter);

    return 0;
}