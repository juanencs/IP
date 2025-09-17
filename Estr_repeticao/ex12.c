/**
 * @file ex12.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que:
- leia um número real X do teclado;
- determine e imprima o seguinte somatório:
S = X - X/1! + X/2! - X/3! + X/4 ! ...
usando os 20 primeiros termos da série.
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int i, j;
    double X, somatorio = 0, fatorial;

    printf ("Insira o valor de X: ");
    scanf ("%lf", &X);

    for(i = 0; i < 20; i++) {
        fatorial = 1;
        for(j = 1; j <= i; j++) {
            fatorial *= j;
        }
            if (i % 2 != 0) {
                somatorio -= X/fatorial;
            } else if (i % 2 == 0) {
                somatorio += X/fatorial;
            }
    }
    printf ("\nSomatorio do 20 primeiros termos: %lf\n", somatorio);

    return 0;
}