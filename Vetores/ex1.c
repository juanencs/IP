/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para somar dois vetores A[5] e B[5] de elementos inteiros.
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#define TAM 5

int main() {

    int vetA[TAM], vetB[TAM];
    int i, soma = 0;

    for (i = 0; i < TAM; i++) {
        printf ("Insira o valor da posicao %d do vetor A: ", i+1);
        scanf ("%d", &vetA[i]);
        printf ("Insira o valor da posicao %d do vetor B: ", i+1);
        scanf ("%d", &vetB[i]);
        printf ("\n");
        soma += vetA[i] + vetB[i];
    }
    printf ("Soma dos vetores A e B: %d\n", soma);

    return 0;
}