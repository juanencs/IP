/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Ler um número e informar se ele é divisÃ­vel por 3 e por 7.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int n;

    printf ("Insira um número N: ");
    scanf ("%d", &n);

    if (n % 3 == 0 && n % 7 == 0) {
        printf ("\n%d É divisível por 3 e por 7.\n", n);
    } else {
        printf ("\n%d Não é divisível por 3 e por 7.\n", n);
    }

    return 0;
}
