// xadrez_aventureiro.c
// Nível Aventureiro — Cavalo em "L" (baixo+esquerda) usando loops aninhados.
// Requisito: obrigatoriamente loops aninhados. Usamos for (externo) + while (interno).

#include <stdio.h>

int main(void) {
    // Configuração do L: 2 passos para BAIXO, depois 1 passo para ESQUERDA
    const int PASSOS_VERTICAIS = 2;
    const int PASSOS_HORIZ     = 1;

    // "Duas pernas" do L: perna 0 = vertical, perna 1 = horizontal
    for (int perna = 0; perna < 2; perna++) {
        int passos = (perna == 0) ? PASSOS_VERTICAIS : PASSOS_HORIZ;

        // interno em while para cumprir o requisito de estruturas distintas
        int i = 0;
        while (i < passos) {
            if (perna == 0) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            i++;
        }
    }

    return 0;
}
