/**
 * @file ex11.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa que calcule o fatorial de um numero inteiro N fornecido pelo usuario. Cuidado com
 * valores invalidos!
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int n, i;
    long int fatorial = 1;
    printf ("Insira o valor de N: ");
    scanf ("%d", &n);

    if (n < 0) {
        printf("\nFatorial nao definido para numeros negativos.\n");
        return 1;
    } else if (n == 0) {
        printf ("\nFatorial de 0 eh 1\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fatorial *= i;
    }

    printf ("\nFatorial de %d: %ld\n", n, fatorial);

    return 0;
}