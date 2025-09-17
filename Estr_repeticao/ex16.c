/**
 * @file ex16.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief A serie de Fetuccine eh gerada da seguinte forma: os dois primeiros termos (inteiros) sao fornecidos pelo
usuario. A partir dai, os termos sao gerados com a soma ou subtracao dos dois termos anteriores, ou seja:
Ai = Ai-1 + Ai-2, para i i­mpar;
Ai = Ai-1 - Ai-2, para i par.
Crie um programa que imprima os N primeiros termos da serie de Fetuccine, assumindo que o usuario digitara um N>=3.
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main () {

    int N, termo1, termo2, termo_atual, i; 

    printf ("Insira o valor do termo 1: ");
    scanf ("%d", &termo1);
    printf ("Insira o valor do termo 2: ");
    scanf ("%d", &termo2);
    printf ("Insira o valor de N: ");
    scanf ("%d", &N);

    if (N < 3) {
        printf ("Valor de N deve ser maior ou igual a 3!");
        return 1;
    }
    printf ("\nPrimeiros termos: ");
    printf ("%d ", termo1);
    printf ("%d", termo2);

    for (i = 3; i <= N; i++) {
        if (i % 2 != 0) { 
            termo_atual = termo2 + termo1;
            printf (" %d", termo_atual);
            termo1 = termo2;
            termo2 = termo_atual;
        } else if (i % 2 == 0) {
            termo_atual = termo2 - termo1;
            printf (" %d", termo_atual);
            termo1 = termo2;
            termo2 = termo_atual;
        }
    }
    printf ("\n");

    return 0;
}
