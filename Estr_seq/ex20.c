/**
 * @file ex20.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa em C que calcule o valor das equações abaixo utilizando 
 * funções da biblioteca math.h, faça um programa para cada equação.
    H = [(a+b)] ?d
    J= (sen a + cos a) / tg a
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

    double H, J, a, a2, b, d;

    // Início do programa 2 //
    printf ("==== Programa 1: calcular o valor da função H = [(a+b)] ^d ====\n");
    
    printf ("Insira o valor de a: ");
    scanf ("%lf", &a);

    printf ("Insira o valor de b: ");
    scanf ("%lf", &b);

    printf ("Insira o valor de d: ");
    scanf ("%lf", &d);

    H = pow(a+b, d);

    printf ("Resultado da equação H: %.2lf\n", H);

    // Início do programa 2. //
    printf ("\n==== Programa 2: calcular o valor da função J = (sen a + cos a) / tg a ====\n");

    printf ("Insira o valor de a: ");
    scanf ("%lf", &a);

    J = (sin(a) + cos(a)) / tan(a);

    printf ("Resultado da equação J: %lf\n", J);

    return 0;
}