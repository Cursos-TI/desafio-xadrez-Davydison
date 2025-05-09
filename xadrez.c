#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

oid moverTorre(int passo, int total) {
    if (passo > total) return;
    printf("Passo %d: Direita\n", passo);
    moverTorre(passo + 1, total);
}

// Rainha: movimento para Esquerda
void moverRainha(int passo, int total) {
    if (passo > total) return;
    printf("Passo %d: Esquerda\n", passo);
    moverRainha(passo + 1, total);
}

// Bispo: movimento diagonal (Cima Direita) com recursão + loops aninhados
void moverBispo(int linhaAtual, int totalLinhas) {
    if (linhaAtual > totalLinhas) return;

    for (int colunaAtual = 1; colunaAtual <= 1; colunaAtual++) { // apenas um passo horizontal por iteração
        printf("Passo %d: Cima Direita\n", linhaAtual);
    }

    moverBispo(linhaAtual + 1, totalLinhas);
}

// --------- Função com loops complexos ---------

// Cavalo: movimento em L (2 para cima e 1 para direita) com loops aninhados
void moverCavalo() {
    printf("\nMovimento do Cavalo (2 casas para Cima e 1 para Direita):\n");

    int maxMovimentos = 1; // número de vezes que o cavalo faz o L
    for (int m = 1; m <= maxMovimentos; m++) {
        int cima = 0;
        while (cima < 2) {
            if (cima == 1) {
                cima++;
                continue; // simula algum controle no movimento (exemplo ilustrativo)
            }
            printf("Passo %d: Cima\n", cima + 1);
            cima++;
        }

        // Após o loop vertical
        for (int dir = 1; dir <= 1; dir++) {
            printf("Passo 3: Direita\n");
            break; // já fez o movimento da direita
        }
    }
}

// --------- Função principal ---------

int main() {
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

    // Torre com recursão
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(1, passosTorre);

    // Bispo com recursão + loop interno
    printf("\nMovimento do Bispo (5 casas na Diagonal: Cima Direita):\n");
    moverBispo(1, passosBispo);

    // Rainha com recursão
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(1, passosRainha);

    // Cavalo com loops complexos
    moverCavalo();

    return 0;
}
