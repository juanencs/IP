/**
 * @file ex4.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Escreva um programa que aloque dinamicamente uma matriz de inteiros de dimensão N. Solicite ao
usuário que insira os valores para a matriz, contudo antes de cada inserção, o código deve verificar se
o número inserido é par, caso seja, a célula é preenchida. Caso contrário, o valor 0 (zero) é atribuído à
célula em questão.
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
    int i, j, N, valor;
    p = NULL;

    printf ("Insira a dimensão da matriz: ");
    scanf ("%d", &N);

    p = (int **) malloc(N * sizeof(int *));
    if (p == NULL) {
        printf ("\nErro de alocacao\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        p[i] = (int *) malloc(N * sizeof(int));

        if (p[i] == NULL) {
            printf ("\nErro de alocacao\n");
            for (j = 0; j < i; j++) {           // Liberacao de memoria em caso de erro
                free(p[j]);
            }
            free(p);
            return 1;
        }

        for (j = 0; j < N; j++) {
            printf ("Insira a matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &valor);

            if (valor % 2 == 0) {
                p[i][j] = valor;
            } else { 
                p[i][j] = 0;
            }
        }
    }

    printf ("\nMatriz resultante:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf ("%d ", p[i][j]);
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