/**
 * @file ex13.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faca um programa que calcule o valor de H, sendo que H eh determinado pela serie:
 * H = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double H = 0, numerador = 1, denominador = 1; 

    while (numerador <= 99 && denominador <= 50) {
        H += numerador / denominador;
        numerador += 2;
        denominador +=1;
    }
    printf ("\nValor de H determinado pela serie: %lf\n", H);

    return 0;
}