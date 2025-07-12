#include <stdio.h>
#define linhas 10 //carlos daniel 
#define colunas 10

int main() {
    int tabuleiro[linhas][colunas];

    // Inicializa todas as posições com 0 (água)
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            tabuleiro[i][j] = 0;
            
            tabuleiro[1][2] = 3;
            tabuleiro[8][8] = 3;
            tabuleiro[4][5] = 3;
            tabuleiro[2][3] = 3;

        }
    }

    // Imprime o cabeçalho das colunas com letras
    printf("  "); // espaço para alinhar com os números das linhas
    for (char letra = 'A'; letra < 'A' + colunas; letra++) {
        printf(" %c", letra);
    }
    printf("\n");

    // Imprime as linhs
    for (int i = 0; i < linhas; i++) {
        printf("%d ", i); // número da linha
        for (int j = 0; j < colunas; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
