/**
 * @file ex1.c
 * @author Juan Enrico
 * @brief JoÃ£o faz economias em dólar, e deseja saber quanto estas economias valem em reais. Leia a quantidade de dólares que ele possui e a cotação atual do dólar (em real). Converta o valor de suas economias para real. Imprimir: o valor das economias em dólar e em real.
 * @version 0.1
 * @date 2025-08-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double e_dolar, e_real, cotaçao; 

    printf ("Insira o valor da economia em dólares: ");
    scanf ("%lf", &e_dolar);

    printf ("Insira o valor da cotação atual do dólar em real: ");
    scanf ("%lf", &cotaçao);

    e_real = e_dolar * cotaçao;

    printf ("O valor das economias em reais é: R$ %.2lf\n", e_real);

    return 0;
}