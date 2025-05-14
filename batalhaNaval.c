#include <stdio.h>


int main() {

    int tabuleiro[10][10] = {0}; // Matriz 10x10 inicializada com zeros

    // Horizontal
    for (int j = 0; j < 0 + 3; j++){
    tabuleiro[4][j] = 3; 
    }

    // Vertical
    for (int i = 7; i < 7 + 3; i++){
        tabuleiro[i][9] = 3; 
    }

    // Diagonal direita
    for (int k = 0; k < 3; k++) {
    tabuleiro[0 + k][0 + k] = 3;
    }

    // Diagonal esquerda
    for (int l = 0; l < 3; l++) {
    tabuleiro[7 + l][2 - l] = 3;
}
    // Aqui ele imprimi o cabeçalho com letras A a J (colunas)
    printf("   "); // Espaço para o índice da linha
    for (char coluna = 'A'; coluna <= 'J'; coluna++) {
        printf(" %c", coluna);
    }
    printf("\n");

    // Aqui ele imprimi linhas numéricas de 1 a 10
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); 
        for (int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}