// xadrez_novato.c
// Nível Novato — Loops simples para simular peças:
// Bispo (while): 5x "Cima Direita"
// Torre (for): 5x "Direita"
// Rainha (do-while): 8x "Esquerda"

#include <stdio.h>

int main(void) {
    // -------------------------
    // ENTRADA (constantes)
    // -------------------------
    const int PASSOS_BISPO  = 5;
    const int PASSOS_TORRE  = 5;
    const int PASSOS_RAINHA = 8;

    // -------------------------
    // BISPO — while (diagonal: Cima + Direita)
    // -------------------------
    int i = 0;
    while (i < PASSOS_BISPO) {
        printf("Cima Direita\n");
        i++;
    }

    // -------------------------
    // TORRE — for (direita)
    // -------------------------
    for (int j = 0; j < PASSOS_TORRE; j++) {
        printf("Direita\n");
    }

    // -------------------------
    // RAINHA — do-while (esquerda)
    // -------------------------
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < PASSOS_RAINHA);

    return 0;
}
