/**
 * @file ex3.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido, o usuário
deverá digitar outro até que ele seja válido (ou seja, positivo). Em seguida, leia um vetor V contendo N
posições de inteiros, em que cada valor deverá ser maior ou igual a 2. Esse vetor deverá ser alocado
dinamicamente.
 * @version 0.1
 * @date 2025-10-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, N, *V;
    V = NULL;

    N = 0;
    while (N < 1) {
        printf ("Insira um valor positivo para o tamanho do vetor: ");
        scanf ("%d", &N);
        
        if (N < 1) {
            printf ("Entrada inválida.\n\n");
        }
    }
    
    V = malloc(N * sizeof(int));
    if (V == NULL) {
        printf ("\nErro de alocacao!\n");
        return 1;
    }

    printf ("\n");
    for (i = 0; i < N; i++) {
        printf ("Insira o valor de V[%d]: ", i+1);
        scanf ("%d", &V[i]);

        if (V[i] < 2) {
            printf ("Insira um número maior ou igual a 2.\n\n");
            i--;
        }
    }

    printf ("\n===========================================\n");
    printf ("VETOR ALOCADO\n\n");
    for (i = 0; i < N; i++) {
        printf ("V[%d]: %d\n", i+1, V[i]);
    }
        
    free(V);
    V = NULL;

    return 0;
}