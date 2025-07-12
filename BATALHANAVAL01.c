#include <stdio.h>
//carlos daniel 11/07/2025
int main() {
    int tabuleiro[10][10];  // Criando o tabuleiro 10x10

    // Inicializando o tabuleiro com 0 (tudo água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando um navio horizontal (3 espaços) na linha 2, colunas 1 a 3
    tabuleiro[2][1] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[2][3] = 1;

    // Posicionando um navio vertical (4 espaços) na coluna 5, linhas 5 a 8
    tabuleiro[5][5] = 2;
    tabuleiro[6][5] = 2;
    tabuleiro[7][5] = 2;
    tabuleiro[8][5] = 2;

    // Mostrando as coordenadas do navio horizonta
    printf("Coordenadas do navio horizontal (valor 1):\n");
    printf("(2, 1)\n");
    printf("(2, 2)\n");
    printf("(2, 3)\n");

    // Mostrando as coordenadas do naio vertical
    printf("\nCoordenadas do navio vertical (valor 2):\n");
    printf("(5, 5)\n");
    printf("(6, 5)\n");
    printf("(7, 5)\n");
    printf("(8, 5)\n");

    return 0;
}
