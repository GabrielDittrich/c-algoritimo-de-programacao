#include <stdio.h>

struct Pessoa
{
    char nome[31];
    int idade;
    float altura;
};

int main()
{
    struct Pessoa pessoa[3];
    int i;

    for (i = 0; i < 3; i++)
    {

        printf("Informe o nome: ");
        scanf(" %30[^\n]", pessoa[i].nome);

        printf("Informe a idade: ");
        scanf("%d", &pessoa[i].idade);

        printf("Informe a altura: ");
        scanf("%f", &pessoa[i].altura);

        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        printf("O aluno %s tem %d anos e %.2f de altura.", pessoa[i].nome, pessoa[i].idade, pessoa[i].altura);
        printf("\n");
    }

    return 0;
}