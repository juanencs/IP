/**
 * @file ex7.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa em C que implemente uma função que receba, uma matriz quadrada Mtab
de ordem 6. Essa função deve retornar, por referência, a soma dos elementos da diagonal
principal e da diagonal secundária.
 * @version 0.1
 * @date 2025-11-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

void soma_diagonais(int i, int j, int valor, int *soma_principal, int *soma_secundaria) {

    if (i == j) {
        *soma_principal += valor;
    } 
    if (i + j == 5) {
        *soma_secundaria += valor;
    }
}

int main() {

    int matriz[6][6];
    int i, j;
    int soma_principal = 0, soma_secundaria = 0;
    
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf ("Insira o elemento da matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);

            soma_diagonais(i, j, matriz[i][j], &soma_principal, &soma_secundaria);
        }
    }

    printf ("\nMatriz preenchida:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf ("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf ("\nSoma da diagonal principal: %d\n", soma_principal);
    printf ("Soma da diagonal secundaria: %d\n", soma_secundaria);

    return 0;
}
