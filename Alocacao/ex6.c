/**
 * @file ex6.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Crie uma matriz triangular dinamicamente alocada, cujo primeiro elemento da matriz deve ser um valor
que o usuário inseriu via teclado. A partir do segundo elemento da matriz até o final, realize um
preenchimento automático no qual o valor de cada célula é o dobro da célula anterior.
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
    int i, j, N, primeiro, valor;
    p = NULL;

    printf ("Insira a quantidade de linhas: ");
    scanf ("%d", &N);
    printf ("Insira o valor do primeiro elemento: ");
    scanf ("%d", &primeiro);

    p = (int **) malloc(N * sizeof(int *));
    if (p == NULL) {
        printf ("\nErro de alocacao!\n");
        return 1;
    }

    valor = primeiro;

    for (i = 0; i < N; i++) {
        p[i] = (int *) malloc((i+1) * sizeof(int));

        if (p[i] == NULL) {
            printf ("\nErro de alocacao!\n");
            for (j = 0; j < i; j++) {           // Liberacao de memoria em caso de erro
                free(p[j]);
            }
            free(p);
            return 1;
        }

        for (j = 0; j < (i+1); j++) {
            p[i][j] = valor;
            valor *= 2;
        }
    }

    printf ("\nMatriz resultante:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < (i+1); j++) {
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