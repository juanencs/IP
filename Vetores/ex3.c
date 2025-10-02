/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para preencher um vetor com 10 números inteiros. Verifique quais dos
números lidos são primos e em que posições eles se encontram no vetor.
 * @version 0.1
 * @date 2025-10-01
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int vet[10];
    int i, j = 1, cont;

    for (i = 0; i < 10; i++) {
        printf ("Insira o valor da posição %d do vetor: ", i+1);
        scanf ("%d", &vet[i]);
    }
    printf ("\n");

    i = 0;
    while (i < 10) {
        cont = 0;
        for (j = 1; j <= vet[i]; j++) {
            if (vet[i] % j == 0) {
                cont++;
            }
        }
        if (cont == 2) {
                printf ("%d é primo na posição %d do vetor!\n", vet[i], i+1);
            }
        i++;
    }
    
    return 0;
}