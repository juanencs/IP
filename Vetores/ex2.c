/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que efetua o produto escalar dos vetores A[n] e B[n] (n <= 30)
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#define TAM 30

int main () {

    int vetA[TAM], vetB[TAM];
    int quant_elementos, i, produto_escalar = 0;

    printf ("Insira a quantidade de elementos de cada vetor (1 a 30): ");
    scanf ("%d", &quant_elementos);

    if (quant_elementos <= 0 || quant_elementos > 30) {
        printf ("\nQuantidade de elementos deve estar entre 1 e 30!\n");
        return 1;
    }

    for (i = 0; i < quant_elementos; i++) {
        printf ("Insira o valor da posicao %d do vetor A: ", i+1);
        scanf ("%d", &vetA[i]);
        printf ("Insira o valor da posicao %d do vetor B: ", i+1);
        scanf ("%d", &vetB[i]);
        printf ("\n");
        produto_escalar += vetA[i] * vetB[i];
    }
    printf ("O produto escalar entre os vetores A e B eh: %d\n", produto_escalar);

    return 0;
}