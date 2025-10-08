/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para ler um vetor vet_A de 10 numeros inteiros. Imprima o vetor dado, o
seu maior elemento e em que posicao de vet_A ele se encontra.
 * @version 0.1
 * @date 2025-10-03
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#define TAM 10

int main () {

    int vet_A[TAM], i, j, maior_elemento, posicao;

    for (i = 0; i < TAM; i++) {
        printf ("Insira o numero da posicao %d do vetor: ", i+1);
        scanf ("%d", &vet_A[i]);
    }

    printf ("\nVetor dado:\n");
    for (i = 0; i < TAM; i++) {
        printf ("%d ", vet_A[i]);
    }

    maior_elemento = vet_A[0];
    for (i = 0; i < TAM; i++) {
        if (vet_A[i] >= maior_elemento) {
            maior_elemento = vet_A[i];
            posicao = i;
        }
    }

    printf ("\n\n%d eh o maior elemento na posicao %d\n", maior_elemento, posicao+1);

    return 0;
}