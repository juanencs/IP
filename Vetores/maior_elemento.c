/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para somar todos os elementos de um vetor A. Em seguida, mostrar
 * o maior elemento desse vetor. 
 * @version 0.1
 * @date 2025-09-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#define TAM 5

int main() {

    int vetA[TAM];
    int i, maior = 0, soma = 0;

    for (i = 0; i < TAM; i++){
        printf ("Insira o valor da posicao %d do vetor A: ", i+1);
        scanf ("%d", &vetA[i]);
        soma += vetA[i];

        if (maior < vetA[i]) {
            maior = vetA[i];
        }
    }
    printf ("\nSoma dos elementos do vetor A: %d\n", soma);
    printf ("Maior elemento do vetor A: %d\n", maior);


    return 0;
}