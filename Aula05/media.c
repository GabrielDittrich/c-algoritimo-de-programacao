
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("\nMe informe as suas 3 notas: ");
    scanf("%f", &nota1);

    printf("\nSegunda nota: ");
    scanf("%f", &nota2);

    printf("\nTerceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 6)
    {
        printf("\nVocê foi aprovado!!!\nSua media foi %.2f ", media);
    }
    else if (media >= 4)
    {
        printf("\nVocê está de recuperação.\nSua media foi %.2f", media);
    }
    else if (media < 4)
    {
        printf("\nVocê está reprovado\nSua media foi %.2f", media);
    }

    return 0;
}
