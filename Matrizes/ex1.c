/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que receba duas matrizes com M linhas e N colunas: A(mxn) e B(mxn), calcule C =
A + B, exiba as matrizes fornecidas e o resultado
 * @version 0.1
 * @date 2025-10-08
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int i, j, m, n;
    printf ("Insira a quantidade de linhas (Ex: 3 4):\n");
    if (scanf("%d %d", &m, &n) != 2) {
        printf ("\nEntrada inválida, informe dois numeros inteiros.\n");
        return 1;
    }
    if (m < 1 || n < 1) {
        printf ("\nOs valores de linha e coluna devem ser maiores ou iguais a 1.\n");
        return 1;
    }
    int mat_A[m][n], mat_B[m][n], mat_C[m][n];

    printf ("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("Insira a matriz A[%d][%d]: ", i+1, j+1);
            scanf ("%d", &mat_A[i][j]);
        }
    }
    
    printf ("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("Insira a matriz B[%d][%d]: ", i+1, j+1);
            scanf ("%d", &mat_B[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            mat_C[i][j] = mat_A[i][j] + mat_B[i][j];
        }
    }

    printf ("\nMatriz A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", mat_A[i][j]);
        }
        printf ("\n");
    }
    
    printf ("\nMatriz B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", mat_B[i][j]);
        }
        printf ("\n");
    }

    printf ("\nResultado da soma de A e B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", mat_C[i][j]);
        }
        printf ("\n");
    }

    return 0;
}