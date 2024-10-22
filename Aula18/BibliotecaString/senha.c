#include <stdio.h>
#include <string.h>
int main()
{
    char senha[4] = "123", confirmar_senha[4] = "123";
    
    if(strcmp(senha, confirmar_senha) == 0){
    
    printf("As senhas conferem");    
    }else{
    printf("Senha incorreta");
    }
    
    return 0;
}