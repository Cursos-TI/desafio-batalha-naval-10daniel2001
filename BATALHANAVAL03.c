#include <stdio.h>  //nivel mestre 
#define TAM 5 // Tamanho das matrizes de habilidades

void mostrarMatriz(int matriz[TAM][TAM], char nome[]) {
    printf("\nHabilidade: %s\n", nome);
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int cone[TAM][TAM];
    int cruz[TAM][TAM];
    int octaedro[TAM][TAM];

    // Inicializa todas com 0
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cone[i][j] = 0;
            cruz[i][j] = 0;
            octaedro[i][j] = 0;
        }
    }

    // Preenche padrão CONE (ponta para baixo)
                  cone[0][2] = 1;
                 cone[1][1] = 1; cone[1][2] = 1; cone[1][3] = 1;
                 for (int j = 0; j < TAM; j++) {
                 cone[2][j] = 1;
    }

                                             // Preenche padrão CRUZ
                                         for (int i = 0; i < TAM; i++) {
                                     cruz[2][i] = 1; // linha do meio
                                   cruz[i][2] = 1; // coluna do meio
    }

    // Preenche padrão OCTAEDRO
          octaedro[0][2] = 1;
          octaedro[1][1] = 1; octaedro[1][2] = 1; octaedro[1][3] = 1;
               octaedro[2][2] = 1;
    
                 // Exibe todas as habilidades
                   mostrarMatriz(cone, "CONE");
                      mostrarMatriz(cruz, "CRUZ");
                         mostrarMatriz(octaedro, "OCTAEDRO");
//carlos daniel 15/07/2025 vs code
    return 0;
}
