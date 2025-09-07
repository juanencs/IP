/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Ler um n�mero fornecido pelo usu�rio e imprimi-lo. Por�m, caso este n�mero seja negativo, imprima o valor original e seu valor absoluto.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, n_absoluto;

    printf ("Insira um n�mero N: ");
    scanf ("%d", &n);

    n_absoluto = abs(n);

    if (n > 0) {
        printf ("\nValor de N: %d\n", n);
    } else {
        printf ("\nValor absoluto de N: %d\n", n_absoluto);
    }

    return 0;
}