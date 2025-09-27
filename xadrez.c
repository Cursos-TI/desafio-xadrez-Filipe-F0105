#include <stdio.h>

int main() {
    
    int rainha = 1, bispo = 1 , torre = 1;

//  MOVIMENTOS DA TORRE;

    printf("Movimento da Torre:\n");
    for (torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }
        printf("\n");

//  MOVIMENTOS DO BISPO;      

    printf("Movimento do Bispo:\n");
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }
    printf("\n");

//  MOVIMENTOS DA RAINHA;   

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);

    return 0;
}
