#include <stdio.h>

int main() {

    int rainha = 1, bispo = 1, torre = 1;
    int casasBaixo = 2, casasEsquerda = 1; 
    int i, j;

   
    // MOVIMENTOS DA TORRE

    printf("Movimento da Torre:\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }
    printf("\n");

 
    // MOVIMENTOS DO BISPO
 
    printf("Movimento do Bispo:\n");
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }
    printf("\n");

    // MOVIMENTOS DA RAINHA

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    printf("\n");

 
    // MOVIMENTOS DO CAVALO
  
    printf("Movimento do Cavalo:\n");

   
    for (i = 0; i < casasBaixo; i++) {
        
        j = 0;
        while (j < 1) {
            printf("Baixo\n");
            j++;
        }
    }

    // Agora o movimento final para a esquerda
    j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasEsquerda);

    return 0;
}
