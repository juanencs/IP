/**
 * @file ex19.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa em C que leia 5 valores inteiros e imprima para cada um 
 o seu correspondente valor absoluto. Para obter o valor absoluto do número utilize a 
 função adequada da biblioteca math.h.
 * @version 0.1
 * @date 2025-08-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int n1, n2, n3, n4, n5;
    
    printf ("Insira os valores de N1, N2 , N3, N4 e N5: ");
    scanf ("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    n1 = fabs(n1);
    n2 = fabs(n2);
    n3 = fabs(n3);
    n4 = fabs(n4);
    n5 = fabs(n5);

    printf ("\nValores absolutos de N1, N2 , N3 , N4 e N5: ");
    printf ("%d, %d, %d, %d, %d", n1, n2, n3, n4, n5);

    return 0;
}