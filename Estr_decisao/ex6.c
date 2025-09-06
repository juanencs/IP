/**
 * @file ex6.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Determinar se um número fornecido pelo usuário é par ou ímpar. Imprima o número e a
mensagem correspondente.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int n;

    printf ("Insira um número: ");
    scanf ("%d", &n);

    if (n % 2 == 0) {
        printf ("\n%d é par!\n", n);
    } else {
        printf ("\n%d é ímpar!\n", n);
    }

    return 0;
}