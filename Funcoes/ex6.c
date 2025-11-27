/**
 * @file ex6.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa em C que implemente uma função que receba como parâmetro um array
unidimensional contendo N valores inteiros. Essa função deve retornar, por referência, dois
valores: a soma dos números pares e a soma dos ímpares.
 * @version 0.1
 * @date 2025-11-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

void soma_pares_impares(int valor, int *soma_par, int *soma_impar){

    if (valor % 2 == 0) {
        *soma_par += valor;
    } else {
        *soma_impar += valor;
    }
}

int main() {

    int N, i;
    int soma_par = 0, soma_impar = 0;

    printf("Insira a quantidade de elementos do vetor: ");
    scanf("%d", &N);

    int vet[N];

    printf ("\n");
    for (i = 0; i < N; i++) {
        printf ("Insira o elemento vet[%d]: ", i+1);
        scanf ("%d", &vet[i]);

        soma_pares_impares(vet[i], &soma_par, &soma_impar);
    }
    
    printf ("\nSoma dos elementos pares: %d\n", soma_par);
    printf ("Soma dos elementos impares: %d\n", soma_impar);

    return 0;
}