#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Número de casas a serem movidas (pré-definidos)
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ----------------------------------
    // Movimento da Torre (FOR)
    // ----------------------------------
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // ----------------------------------
    // Movimento do Bispo (WHILE)
    // ----------------------------------
    printf("\nMovimento do Bispo (5 casas na Diagonal: Cima Direita):\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Passo %d: Cima Direita\n", i);
        i++;
    }

    // ----------------------------------
    // Movimento da Rainha (DO-WHILE)
    // ----------------------------------
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int j = 1;
    do {
        printf("Passo %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    // ----------------------------------
    // Movimento do Cavalo (FOR + WHILE)
    // ----------------------------------
    // O Cavalo se move em L: 2 casas para baixo e 1 para esquerda
    printf("\nMovimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    int movimentos = 1; // apenas uma simulação de movimento em L
    for (int k = 1; k <= movimentos; k++) {
        int passo = 1;
        
        // Loop WHILE para 2 movimentos para baixo
        while (passo <= 2) {
            printf("Passo %d: Baixo\n", passo);
            passo++;
        }

        // Movimento para esquerda (após os 2 baixos)
        printf("Passo %d: Esquerda\n", passo);  // passo == 3
    }
    
    return 0;
}
