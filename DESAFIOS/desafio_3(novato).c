#include <stdio.h>

int main() {
    // DESAFIO NÍVEL NOVATO
    
    int i;

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

    return 0;
}