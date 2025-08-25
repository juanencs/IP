/**
 * @file ex1.c
 * @author Juan Enrico
 * @brief João faz economias em d�lar, e deseja saber quanto estas economias valem em reais. Leia a quantidade de d�lares que ele possui e a cota��o atual do d�lar (em real). Converta o valor de suas economias para real. Imprimir: o valor das economias em d�lar e em real.
 * @version 0.1
 * @date 2025-08-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double e_dolar, e_real, cota�ao; 

    printf ("Insira o valor da economia em d�lares: ");
    scanf ("%lf", &e_dolar);

    printf ("Insira o valor da cota��o atual do d�lar em real: ");
    scanf ("%lf", &cota�ao);

    e_real = e_dolar * cota�ao;

    printf ("O valor das economias em reais �: R$ %.2lf\n", e_real);

    return 0;
}