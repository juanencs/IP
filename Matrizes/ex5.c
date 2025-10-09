/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que, dada uma matriz de elementos reais mat_A, calcule a soma dos
elementos de uma linha i da matriz, onde i é fornecida pelo usuário. Exiba a matriz fornecida e o
resultado.
 * @version 0.1
 * @date 2025-10-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int i, j, m, n, linha;

    printf ("Insira a quantidade de linhas e colunas (ex: 3 4): ");
    if (scanf ("%d %d", &m, &n) != 2) {
        printf ("\nEntrada inválida, insira dois numeros inteiros.\n");
        return 1;
    }
    if (m < 1 || n < 1) {
        printf ("Os valores de linhas e colunas de ser maiores ou iguais a 1.");
        return 1;
    }

    double mat_A[m][n], soma = 0;

    printf ("\nQual linha da matriz deseja somar os elementos?: ");
    scanf ("%d", &linha);

    printf ("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("Insira a matriz[%d][%d]: ", i+1, j+1);
            scanf ("%lf", &mat_A[i][j]);

            if (i == linha) {
                soma += mat_A[i][j];
            }
        }
    }

    printf ("\nMatriz fornecida:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%.2lf ", mat_A[i][j]);
        }
        printf ("\n");
    }

    printf ("\nResultado da soma dos elementos da linha %d da matriz: %.2lf\n", linha, soma);

    return 0;
}