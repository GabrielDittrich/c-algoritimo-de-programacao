#include <stdio.h>
// Escreva uma função que solicite ao usuário o nome de um produto, o preço desse produto e o valor em dinheiro entregue ao vendedor.
//  Em seguida, deve ser mostrada uma mensagem baseada no seguinte exemplo: "Você comprou um produto (mouse) por R$ 185,00 e entregou ao vendedor R$
//  200,00 em dinheiro. Você vai receber R$ 15,00 de troco. Volte sempre!".

void mensagem(const char *nome_produto, float preco_produto, float valor_entregue)
{
    printf("Você comprou um produto (%s) por R$ %.2f e entregou ao vendedor R$ %.2f em dinheiro. "
           "Você vai receber R$ %.2f de troco. Volte sempre!\n",
           nome_produto, preco_produto, valor_entregue, valor_entregue - preco_produto);
}

int main()
{
    mensagem("Mouse", 184.99, 200);
    return 0;
}
