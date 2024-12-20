#include <stdio.h>#include <stdio.h>
 
int main(){
    
    /* Declaração e inicialização da matriz 3 x 3 */
    int matriz[3][3] = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};
    
    /* Declaração e inicialização de um vetor de apoio com 8 elementos para armazenar, respectivamente, a soma da linha 1, a soma da linha 2, a soma da linha 3, a soma da coluna 1, a soma da coluna 2, a soma da coluna 3, a soma da diagonal principal e a soma da diagonal secundária. Os elementos do vetor são inicializados com 0. */
    int vetor[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i;
    
    for(i = 0; i < 3; i++){
        /* Soma da linha 1 */
        vetor[0] += matriz[0][i];
        
        /* Soma da linha 2 */
        vetor[1] += matriz[1][i];
        
        /* Soma da linha 3 */
        vetor[2] += matriz[2][i];
        
        /* Soma das coluna 1 */
        vetor[3] += matriz[i][0];
        
        /* Soma das coluna 2 */
        vetor[4] += matriz[i][1];
        
        /* Soma das coluna 3 */
        vetor[5] += matriz[i][2];
        
        /* Soma da diagonal principal */
        vetor[6] += matriz[i][i];
        
        /* Soma da diagonal secundária */
        vetor[7] += matriz[i][2 - i];
    }
        
    /* Verifica se todas as somas são iguais. Caso não sejam, o programa é encerrado */
    for(i = 1; i < 8; i++){
        if(vetor[i] != vetor[0]){
            printf("A matriz não é um quadrado mágico.");
            return 0;
        }
    }
            
    /* Informa se a matriz é um quadrado mágico */
    printf("A matriz é um quadrado mágico.");
            
    return 0;
}