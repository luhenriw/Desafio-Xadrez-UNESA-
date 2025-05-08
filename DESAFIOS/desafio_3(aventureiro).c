#include <stdio.h>

int main() {
    //DESAFIO NÍVEL AVENTUREIRO
    
    int i, j;

    // Movimento da TORRE
    printf("Movimento da Torre:\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // movimento do BISPO
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while(i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da RAINHA
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while(i < 8);

    // Movimento do CAVALO
    printf("\nMovimento do Cavalo:\n");

    // 1 repetição do movimento completo em L
    for(i = 0; i < 1; i++) {
        // primeiro loop interno
        j = 0;
        while(j < 2) {
            printf("Baixo\n");
            j++;
        }
        // move 1 casa para a esquerda
        printf("Esquerda\n");
    }

    return 0;
}