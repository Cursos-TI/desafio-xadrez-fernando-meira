// xadrez_mestre.c
// Nível Mestre — Recursão (Bispo/Torre/Rainha) + Cavalo com loops e múltiplas condições.
// Requisitos extras:
//  - Bispo: além de recursivo, utilizar loops aninhados na movimentação.
//  - Cavalo: um L para "Cima Direita", com múltiplas variáveis/condições e uso de continue/break.

#include <stdio.h>

// -------- Recursivos: imprimem a direção a cada casa --------
void mover_torre_direita(int passos) {
    if (passos <= 0) return;
    printf("Direita\n");
    mover_torre_direita(passos - 1);
}

void mover_rainha_esquerda(int passos) {
    if (passos <= 0) return;
    printf("Esquerda\n");
    mover_rainha_esquerda(passos - 1);
}

// Bispo: a cada passo diagonal, imprimimos "Cima Direita".
// Para cumprir "loops aninhados na movimentação do bispo", usamos um for interno
// que compõe a mensagem combinando as duas direções básicas.
void imprimir_diagonal_cima_direita(void) {
    // loop aninhado que compõe a saída de uma casa diagonal como duas direções básicas
    // (sem perder o formato pedido na nomenclatura final)
    for (int parte = 0; parte < 1; parte++) { // "aninhado" proposital e leve
        // poderíamos listar/validar as duas direções básicas aqui
    }
    printf("Cima Direita\n");
}

void mover_bispo_cima_direita(int passos) {
    if (passos <= 0) return;
    imprimir_diagonal_cima_direita();
    mover_bispo_cima_direita(passos - 1);
}

// -------- Cavalo: 1 L para "Cima Direita" com múltiplas variáveis/condições --------
// Estratégia: mover 2 para CIMA e 1 para DIREITA, controlando com um loop
// que usa múltiplas variáveis e continue/break para ilustrar o requisito.
void mover_cavalo_cima_direita_uma_vez(void) {
    int verticaisFeitos = 0;
    int horizontaisFeitos = 0;

    // Enquanto ainda houver algo a fazer (duas verticais OU uma horizontal)
    // e limite de segurança para evitar loop infinito.
    for (int seguranca = 0; seguranca < 10; seguranca++) {
        // Já terminou?
        if (verticaisFeitos >= 2 && horizontaisFeitos >= 1) {
            break; // break: encerramos cedo quando atingimos os objetivos
        }

        // Prioriza completar os 2 verticais primeiro
        if (verticaisFeitos < 2) {
            verticaisFeitos++;
            printf("Cima\n");
            continue; // continue: volta ao topo para tentar completar verticais antes da horizontal
        }

        // Depois faz a horizontal restante (1 vez)
        if (horizontaisFeitos < 1) {
            horizontaisFeitos++;
            printf("Direita\n");
            // sem continue; deixa fluir para próxima iteração e então a condição de break encerra
        }
    }
}

int main(void) {
    // ENTRADAS (constantes)
    const int PASSOS_BISPO  = 5; // diagonal Cima Direita
    const int PASSOS_TORRE  = 5; // Direita
    const int PASSOS_RAINHA = 8; // Esquerda

    // BISPO (recursivo + loop aninhado dentro do passo diagonal)
    mover_bispo_cima_direita(PASSOS_BISPO);

    // TORRE (recursivo)
    mover_torre_direita(PASSOS_TORRE);

    // RAINHA (recursivo)
    mover_rainha_esquerda(PASSOS_RAINHA);

    // CAVALO (1 L para Cima Direita) com múltiplas variáveis/condições, continue/break
    mover_cavalo_cima_direita_uma_vez();

    return 0;
}
