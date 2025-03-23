#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1);
}

void moverBispoLoop(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {
            printf("Cima, Direita (Passo %d)\n", i);
        }
    }
}

void moverCavalo() {
    int movimentosParaCima = 2, movimentosParaDireita = 1;
    for (int i = 0; i < movimentosParaCima; i++) {
        for (int j = 0; j < 2; j++) {
            if (j == 0) {
                printf("Cima\n");
            }
        }
    }
    for (int i = 0; i < movimentosParaDireita; i++) {
        printf("Direita\n");
    }
}

int main() {
    int casasTorre = 5, casasBispo = 5, casasRainha = 8;
    
    // Movimento da Torre (Recursivo)
    printf("Movimento da Torre (Recursivo):\n");
    moverTorre(casasTorre);
    
    // Movimento da Rainha (Recursivo)
    printf("\nMovimento da Rainha (Recursivo):\n");
    moverRainha(casasRainha);
    
    // Movimento do Bispo (Recursivo)
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    
    // Movimento do Bispo (Loops Aninhados)
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoLoop(casasBispo);
    
    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();
    
    return 0;
}
