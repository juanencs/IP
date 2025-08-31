/**
 * @file ex15.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que leia a distância em centímetros entre duas Universidades. Calcule esta
distância em Km. Imprima a distância em centímetros e a correspondente em Km.
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

    int cm;
    double km;
    
    printf ("Insira o valor da distância em centímetros: ");
    scanf ("%d", &cm);

    km = cm / pow(10.0, 5.0);
    
    printf ("\nValor da distância em cm: %d\n", cm);
    printf ("Valor da distância em km: %.6lf\n", km);

    return 0;
}