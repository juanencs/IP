/**
 * @file ex10.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que monte a sequencia de Fibonacci com N termos.
A sequencia de Fibonacci é dada por: 0 – 1 – 1 – 2 – 3 – 5 – 8 – 13 – 21 – 34 – 55 – …
O primeiro e o segundo termos da sequencia de Fibonacci são 0 e 1.
Considere que o usuario ira informar um número N >= 3.
 * @version 0.1
 * @date 2025-09-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int termo1, termo2, termo_atual = 0, n, i;

    printf ("Insira o valor de n-esimo termo (N >= 3): ");
    scanf ("%d", &n);

    termo1 = 0;
    termo2 = 1;

    printf ("%d ", termo1);
    printf ("%d", termo2);

    for (i = 0; i < n - 2; i++) {
        termo_atual = termo1 + termo2;
        printf (" %d", termo_atual);
        termo1 = termo2;
        termo2 = termo_atual;
    }
    printf ("\n");

    return 0;
}
