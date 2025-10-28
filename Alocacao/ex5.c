/**
 * @file ex5.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo N
linhas e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 1 nos elementos
acima da diagonal principal e o valor −1 nos elementos abaixo da diagonal principal.
 * @version 0.1
 * @date 2025-10-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int **p;
    int i, j, N;
    p = NULL;

    printf ("Insira o valor de N: ");
    scanf ("%d", &N);

    p = (int **) malloc(N * sizeof(int *));
    if (p == NULL) {
        printf ("\nErro de alocacao!\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        p[i] = (int *) malloc(N * sizeof(int));

        if (p[i] == NULL) {
            printf ("\nErro de alocacao!\n");
            for (j = 0; j < i; j++) {           // Liberacao de memoria em caso de erro
                free(p[j]);
            }
            free(p);
            return 1;
        }

        for (j = 0; j < N; j++) {
            if (i == j) {
                p[i][j] = 0;
            } else if (i < j) {
               p[i][j] = 1; 
            } else if (i > j) {
               p[i][j] = -1; 
            }
        }
    }

    printf ("\nMatriz resultante:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf ("%2d ", p[i][j]);
        }
        printf ("\n");
    }

    for (i = 0; i < N; i++) {
        free(p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}