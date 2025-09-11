/**
 * @file ex8.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que imprima todos os numeros inteiros de 1 (inclusive) até 20 (inclusive) e tambem a soma
de todos eles.
 * @version 0.1
 * @date 2025-09-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int i, soma;

    for (i = 1; i >= 1 && i <= 20; i++) {
        printf ("%d\n", i);
        soma += i;
    }
    printf ("Soma dos elementos: %d", soma);

    return 0;
}
