//desafio batalha naval: criar um tabuleiro 10x10.
//modalidade mestre
#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // preencher com 0
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ====== CRUZ ======

    // coluna vertical (centro)
    for(int i = 0; i <= 4; i++) {
        tabuleiro[i][4] = 3;
    }

    // linha horizontal
    for(int j = 2; j <= 6; j++) {
        tabuleiro[2][j] = 3;
    }

    // ====== OCTAEDRA ======

    tabuleiro[3][7] = 2;

    for(int j = 6; j <= 8; j++) {
        tabuleiro[4][j] = 2;
    }

    for(int j = 5; j <= 8; j++) {
        tabuleiro[5][j] = 2;
    }

    tabuleiro[6][6] = 2;
    tabuleiro[6][7] = 2;

    tabuleiro[7][7] = 2;

    // ====== CONE ======

    tabuleiro[5][2] = 1;

    tabuleiro[6][1] = 1;
    tabuleiro[6][2] = 1;
    tabuleiro[6][3] = 1;

    for(int j = 0; j <= 4; j++) {
        tabuleiro[7][j] = 1;
    }

    // ===== impressão =====

    printf("Batalha Naval : \n");
    printf("   ");
    for(int j = 0; j < 10; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("%d  ", i);
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}