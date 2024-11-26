#include <stdio.h>
// Vitor é frequentemente questionado sobre sua idade.
// Cansado de responde á mesma pergunta, ele decidiu fazer um joguinho de adivinhação.
// O programa deve perguntar ao jogador um palpite e se o palpite for abaixo da idade de Vitor o programa responderá "Muito baixo",
// se o palpite for acime da idade de Vitor o programa responderá "Muito Alto".
// O programa deve repetir esse processo enquanto usuário não digitar a idade correta de Vitor, que possui 97 anos.
int palpite_idade(int palpite)
{
    int idade = 97;

    do
    {
        if (palpite < 97)
        {
            printf("Muito Baixo\n");
            printf("Tente novamente: ");
            scanf("%d", &palpite);
        }
        else if (palpite > 97)
        {
            printf("Muito Alto\n");
            printf("Tente novamente: ");
            scanf("%d", &palpite);
        }
    } while (palpite != 97);
    printf("Acertou! ele tem %d anos ", palpite);
}

int main()
{
    int palpite = 0;

    printf("Qual o palpite da idade do Vitor? ");
    scanf("%d", &palpite);

    printf("%c", palpite_idade(palpite));

    return 0;
}