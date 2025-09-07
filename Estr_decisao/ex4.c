/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Ler um n�mero e informar se ele � divisível por 3 e por 7.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int n;

    printf ("Insira um n�mero N: ");
    scanf ("%d", &n);

    if (n % 3 == 0 && n % 7 == 0) {
        printf ("\n%d � divis�vel por 3 e por 7.\n", n);
    } else {
        printf ("\n%d N�o � divis�vel por 3 e por 7.\n", n);
    }

    return 0;
}
