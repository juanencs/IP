/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Determinar se um n�mero A � divis�vel por um outro n�mero B. Esses valores devem ser
fornecidos pelo usu�rio.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int a, b;

    printf ("Insira o n�mero A para ser dividido: ");
    scanf ("%d", &a);

    printf ("Insira o n�mero B para dividir A: ");
    scanf ("%d", &b);

    if (a % b == 0) {
        printf ("\n%d � divis�vel por %d\n", a, b);
    } else {
        printf ("\n%d N�o � divis�vel por %d\n", a, b);
    }

    return 0;
}