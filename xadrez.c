#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}