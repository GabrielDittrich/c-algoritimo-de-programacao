#include <stdio.h>

int main() {
    int gols_gremio = 0, gols_inter = 0;
    int pts_gremio = 0, pts_inter = 0, empates = 0;
    int total_gols_gremio = 0, total_gols_inter = 0;
    int continuar = 1;

    do {
        printf("Quantos gols o Grêmio marcou?\n");
        scanf("%d", &gols_gremio);
        
        printf("Quantos gols o Inter marcou?\n");
        scanf("%d", &gols_inter);

        total_gols_gremio += gols_gremio;
        total_gols_inter += gols_inter;

        if (gols_gremio > gols_inter) {
            printf("\nGrêmio Ganhou!\n");
            pts_gremio++;
        } else if (gols_inter > gols_gremio) {
            printf("\nInter Ganhou!\n");
            pts_inter++;
        } else {
            printf("\nEmpate\n");
            empates++;
        }

        printf("\nContinuar o Programa?\n1 - Sim \n0 - Não\n");
        scanf("%d", &continuar);
        printf("\n");
    } while (continuar != 0);

    int total_partidas = pts_gremio + pts_inter + empates;
    printf("\nTeve %d Grenais na estatística\n", total_partidas);
    printf("O Inter Ganhou %d vezes\n", pts_inter);
    printf("O Grêmio Ganhou %d vezes\n", pts_gremio);
    printf("Teve %d empates\n", empates);
    printf("Contando todas as partidas:\nGrêmio fez %d gols\nInter fez %d gols.\n", total_gols_gremio, total_gols_inter);

    return 0;
}
