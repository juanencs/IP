/**
 * @file ex2.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a
alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.
 * @version 0.1
 * @date 2025-10-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int TAM, *vet, i;
    vet = NULL;

    printf ("Insira o tamanho do vetor a ser lido: ");
    scanf ("%d", &TAM);
    printf ("\n");

    vet = malloc(TAM * sizeof(int));
    if (vet == NULL) {
        printf ("\nErro de alocacao!\n");
        return 1;
    } 

    for (i = 0; i < TAM; i++) {
        printf ("Insira o elemento vet[%d]: ", i+1);
        scanf ("%d", &vet[i]);
    }

    printf ("\n===========================================\n");
    printf ("VETOR ALOCADO\n\n");
    for (i = 0; i < TAM; i++) {
        printf ("Vet[%d]: %d\n", i+1, vet[i]);
    }

    free(vet);
    vet = NULL;

    return 0;
}