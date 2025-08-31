/**
 * @file ex15.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Fa�a um programa que leia a dist�ncia em cent�metros entre duas Universidades. Calcule esta
dist�ncia em Km. Imprima a dist�ncia em cent�metros e a correspondente em Km.
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
    
    printf ("Insira o valor da dist�ncia em cent�metros: ");
    scanf ("%d", &cm);

    km = cm / pow(10.0, 5.0);
    
    printf ("\nValor da dist�ncia em cm: %d\n", cm);
    printf ("Valor da dist�ncia em km: %.6lf\n", km);

    return 0;
}