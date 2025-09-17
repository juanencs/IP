/**
 * @file ex29.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa que calcule e imprima o valor do somatorio de todos os numeros 
 * inteiros de 1 a N, onde N e um numero inteiro positivo fornecido pelo usuario. 
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int soma = 0, N, i;

    printf ("Insira o valor de N: ");
    scanf ("%d", &N);

    for (i = 1; i <= N; i++) {
        soma += i;
    }
    printf ("\nSomatorio de 1 a N: %d\n", soma);

    return 0;
}
