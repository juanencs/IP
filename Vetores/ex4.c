/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para ler um vetor de 10 números inteiros e, em seguida, ordene o vetor
em ordem crescente, ou seja, coloque na posição 0 o menor de todos os elementos, na posição
1 o segundo menor e assim por diante. Ao final, Imprimir o vetor original e o vetor resultante.
 * @version 0.1
 * @date 2025-10-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main () {

    int vet[10], i, j, menor;

    for (i = 0; i < 10; i++) {
        printf ("Insira o valor da posição %d do vetor: ", i+1);
        scanf ("%d", &vet[i]);
    }

    printf ("\nVetor original:\n");
    for (i = 0; i < 10; i++) {
        printf ("%d ", vet[i]);
    }

    for (j = 0; j < 10; j++) {
        for (i = 0; i < 10; i++) {
            if (vet[j] > vet[i+1]) {
                menor = vet[i+1];
                vet[i+1] = vet[i];
                vet[i] = menor;
            } else {
                menor = vet[i];
            }
        }
    }

    printf ("\nVetor resultante:\n");
    for (i = 0; i < 10; i++) {
        printf ("%d ", vet[i]);
    }
    printf ("\n");

    return 0;
}