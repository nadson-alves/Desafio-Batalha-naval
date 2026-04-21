//desafio batalha naval: criar um tabuleiro 10x10.
//modalidade mestre
#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // preenchimento com 0
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // navio diagonal (↘) começando "salteado"
    int linha1 = 1;
    int coluna1 = 3;
    for(int k = 0; k < 3; k++) {
        tabuleiro[linha1 + k][coluna1 + k] = 3;
    }

    // navio diagonal (↙) começando "salteado"
    int linha2 = 2;
    int coluna2 = 8;
    for(int k = 0; k < 3; k++) {
        tabuleiro[linha2 + k][coluna2 - k] = 3;
    }

    printf("Tabuleiro Batalha Naval:\n");
    // imprimindo letras (colunas)
    printf("   ");
    for(int j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");

    // imprimindo tabuleiro
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i);
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}