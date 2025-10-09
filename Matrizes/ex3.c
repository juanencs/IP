/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que calcule:
a) a soma dos elementos que estiverem acima da diagonal principal de uma matriz X(mxn)
informada, exiba a matriz fornecida e o resultado;
b) a soma dos elementos que estiverem abaixo da diagonal principal de uma matriz X(mxn)
informada, exiba a matriz fornecida e o resultado.
 * @version 0.1
 * @date 2025-10-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int i, j, m, n, soma_abaixo = 0, soma_acima = 0, op; 

    printf ("Insira a quantidade de linhas e colunas (ex: 3 4): ");
    if (scanf ("%d %d", &m, &n) != 2) {
        printf ("\nEntrada inválida, informe dois números inteiros.\n");
        return 1;
    }
    if (m < 1 || n < 1) {
        printf ("\nOs valores de linha e coluna devem ser maiores ou iguais a 1.\n");
        return 1;
    }

    printf ("\nSelecione a opção que deseja calcular e imprimir:\n");
    printf ("1- Acima da diagonal principal.\n");
    printf ("2- Abaixo da diagonal principal.\n");
    scanf ("%d", &op);

    int matriz[m][n];

    printf ("\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("Insira a matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);

            if (i != j && i < j && op == 1) {
                soma_acima += matriz[i][j];
            } else if (i != j && i > j && op == 2) {
                soma_abaixo += matriz[i][j];
            }
        }
    }

    printf ("\nMatriz fornecida:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }

    if (op == 1) {
        printf ("\nSoma dos elementos acima da diagonal principal: %d\n", soma_acima);
    }
    if (op == 2) {
        printf ("\nSoma dos elementos abaixo da diagonal principal: %d\n", soma_abaixo);
    }

    return 0;
}