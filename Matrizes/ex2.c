/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que dada uma matriz com M linhas e N colunas: A(mxn), some todos os seus
elementos, exiba a matriz fornecida e o resultado.
 * @version 0.1
 * @date 2025-10-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int i, j, m, n, soma = 0; 
    
    printf ("Insira a quantidade de linhas e colunas (Ex: 3 4):\n");
    if (scanf("%d %d", &m, &n) != 2) {
        printf ("\nEntrada inválida, informe dois numeros inteiros.\n");
        return 1;
    }
    if (m < 1 || n < 1) {
        printf ("\nOs valores de linha e coluna devem ser maiores ou iguais a 1.\n");
        return 1;
    }

    int matriz[m][n];

    printf ("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("Insira a matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf ("\nMatriz fornecida:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }

    printf ("\nResultado da soma: %d\n", soma);

    return 0;
}