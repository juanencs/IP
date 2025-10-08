/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para ler um vetor de 10 numeros inteiros e, em seguida, ordene o vetor
em ordem crescente, ou seja, coloque na posição 0 o menor de todos os elementos, na posicao
1 o segundo menor e assim por diante. Ao final, Imprimir o vetor original e o vetor resultante.
 * @version 0.1
 * @date 2025-10-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#define TAM 10

int main () {

    int vet[TAM], i, j, menor;

    for (i = 0; i < TAM; i++) {
        printf ("Insira o valor da posicao %d do vetor: ", i+1);
        scanf ("%d", &vet[i]);
    }

    printf ("\nVetor original:\n");
    for (i = 0; i < TAM; i++) {
        printf ("%d ", vet[i]);
    }

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (i != j && vet[i] <= vet[j]) {
                menor = vet[i];
                vet[i] = vet[j];
                vet[j] = menor;
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