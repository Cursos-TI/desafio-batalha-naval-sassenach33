#include <stdio.h>

// Desafio Batalha Naval - MateCheck
 
int main() {

    int tabuleiro[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("--- Posicionamento de Navios ---\n\n");

    // --- Navio Vertical ---

    int navioVerticalLinhaInicial = 1;
    int navioVerticalColuna = 2;
    int navioVerticalTamanho = 3;

    printf("Navio Vertical (Tamanho: %d):\n", navioVerticalTamanho);
    for (int i = 0; i < navioVerticalTamanho; i++) {
        int linhaAtual = navioVerticalLinhaInicial + i;
        // Marca a posição no tabuleiro (opcional, para uma representação visual interna)
        if (linhaAtual < 5) { // Garante que não saia dos limites do tabuleiro
            tabuleiro[linhaAtual][navioVerticalColuna] = 1;
        }
        printf("  Coordenada: (%d, %d)\n", linhaAtual, navioVerticalColuna);
    }
    printf("\n");

    // --- Navio Horizontal ---

    int navioHorizontalLinha = 3;
    int navioHorizontalColunaInicial = 0;
    int navioHorizontalTamanho = 4;

    printf("Navio Horizontal (Tamanho: %d):\n", navioHorizontalTamanho);
    for (int j = 0; j < navioHorizontalTamanho; j++) {
        int colunaAtual = navioHorizontalColunaInicial + j;

        if (colunaAtual < 5) {
            tabuleiro[navioHorizontalLinha][colunaAtual] = 1;
        }
        printf("  Coordenada: (%d, %d)\n", navioHorizontalLinha, colunaAtual);
    }
    printf("\n");

    printf("Representação do Tabuleiro (0: Vazio, 1: Navio):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
