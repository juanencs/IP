/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Determinar se um número A é divisível por um outro número B. Esses valores devem ser
fornecidos pelo usuário.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int a, b;

    printf ("Insira o número A para ser dividido: ");
    scanf ("%d", &a);

    printf ("Insira o número B para dividir A: ");
    scanf ("%d", &b);

    if (a % b == 0) {
        printf ("\n%d É divisível por %d\n", a, b);
    } else {
        printf ("\n%d Não é divisível por %d\n", a, b);
    }

    return 0;
}