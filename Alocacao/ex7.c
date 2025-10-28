/*Escreva um programa em C que utilize alocação dinâmica de memória para criar uma matriz de
tamanho M x K, onde M e N são valores inteiros, definidos pelo usuário. Em seguida, utilize ponteiros
para percorrer a matriz, preenchendo-a com valores inteiros fornecidos pelo usuário. Cada valor
preenchido deve ser triplicado antes de ser inserido na matriz. Ao final, calcule e exiba a matriz
preenchida e a soma dos elementos modificados.*/
#include <stdio.h>
#include <stdlib.h>

int main() {

    int **p;
    int i, j, N, M, soma = 0;
    p = NULL;

    printf ("Insira a quantidade de linhas: ");
    scanf ("%d", &N);
    printf ("Insira a quantidade de colunas: ");
    scanf ("%d", &M);
    printf ("\n");

    p = (int **) malloc(N * sizeof(int *));
    if (p == NULL) {
        printf("\nErro de alocação!\n");
        return 1;
    }

    for (i = 0; i < N; i++) {
        p[i] = (int *) malloc(M * sizeof(int));

        if (p[i] == NULL) {
            printf("\nErro de alocação!\n");           
            for (j = 0; j < i; j++) {           // Liberacao de memoria em caso de erro
                free(p[j]);
            }
            free(p);
            return 1;
        }

        for (j = 0; j < M; j++) {
            printf ("Insira a matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &p[i][j]);
            p[i][j] *= 3;
            soma += p[i][j];
        }
    }

    printf ("\nMatriz preenchida:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf ("%d ", p[i][j]);
        }
        printf ("\n");
    } 

    printf ("\nSoma dos elementos modificados: %d\n", soma);

    for (i = 0; i < N; i++) {
        free (p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}