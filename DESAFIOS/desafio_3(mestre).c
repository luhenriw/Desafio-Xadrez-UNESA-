#include <stdio.h>

    // DESAFIO NÍVEL MESTRE

// função recursiva para mover a TORRE para a DIREITA
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// função recursiva para mover a RAINHA para a ESQUERDA
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// função recursiva para mover o BISPO com loops aninhados
void moverBispoRecursivoComLoops(int casas) {
    if (casas <= 0) return;

    // movimento vertical (para CIMA)
    for (int i = 0; i < 1; i++) {
        // movimento horizontal (para DIREITA)
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivoComLoops(casas - 1);
}

// movimento do CAVALO
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int movimentos = 1;  // número de movimentos em L
    for (int m = 0; m < movimentos; m++) {
        int i = 0, j = 0;

        // subida
        for (i = 0; i < 3; i++) {
            if (i == 2) break;  // sai após 2 casas
            printf("Cima\n");
        }

        // movimento para a direita 
        while (j < 1) {
            if (j == -1) continue;
            printf("Direita\n");
            j++;
        }
    }
}

int main() {
    // número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // movimento da TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // movimento do BISPO
    printf("\nMovimento do Bispo:\n");
    moverBispoRecursivoComLoops(casasBispo);

    // movimento da RAINHA
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // movimento do CAVALO
    moverCavalo();
    return 0;
}