#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int main() {
    // Número de casas a serem movidas (pré-definidos)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ----------------------------------
    // Movimento da Torre (FOR)
    // ----------------------------------
    // A torre se move em linha reta: vamos simular 5 casas para a direita
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // ----------------------------------
    // Movimento do Bispo (WHILE)
    // ----------------------------------
    // O bispo se move na diagonal: simular 5 casas na "Cima Direita"
    printf("\nMovimento do Bispo (5 casas na Diagonal: Cima Direita):\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Passo %d: Cima Direita\n", i);
        i++;
    }

    // ----------------------------------
    // Movimento da Rainha (DO-WHILE)
    // ----------------------------------
    // A rainha pode ir em qualquer direção. Simular 8 casas para a esquerda
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int j = 1;
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    return 0;
}
