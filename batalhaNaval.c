#include <stdio.h>


int main() {

    int tabuleiro[10][10] = {0}; // Matriz 10x10 inicializada com zeros

    // Linha 2, coluna B
    for (int j = 1; j < 1 + 3; j++){
    tabuleiro[1][j] = 3; 
    }

    // Linnha 8, coluna J
    for (int i = 7; i < 7 + 3; i++){
        tabuleiro[i][9] = 3; 
    }

    // Imprimir cabeçalho com letras A a J (colunas)
    printf("   "); // Espaço para o índice da linha
    for (char coluna = 'A'; coluna <= 'J'; coluna++) {
        printf(" %c", coluna);
    }
    printf("\n");

    // Imprimir linhas com rótulo numérico de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); // Rótulo da linha (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}