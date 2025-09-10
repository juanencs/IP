/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que apresente os resultados da soma e da media aritmetica dos valores pares situados na
faixa numerica de 50 a 70.
 * @version 0.1
 * @date 2025-09-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int i, j, soma, media; 

    j = 0;
    soma = 0;
    for (i = 50; i >= 50 && i <= 70; i++) {
        if (i % 2 == 0) {
            soma += i;
            j++;
        }
    }
    media = soma / j;

    printf ("\nA soma dos pares: %d\n", soma);
    printf ("Media dos pares: %d\n", media);

    return 0;
}