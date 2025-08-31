/**
 * @file ex13.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Luciana distribui sua renda mensal da seguinte forma: 10% saúde, 25% educação, 30%
alimentação, 10% vestuário; 5% lazer, 20% outros. Faça um programa que leia a renda mensal
liquida de Luciana, calcule e escreva o valor aplicado em cada item acima citado.
 * @version 0.1
 * @date 2025-08-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    double renda, saude, edu, alimentacao, vest, lazer, outros; 

    printf ("Insira o valor da renda mensal: ");
    scanf ("%lf", &renda);

    saude = renda * 0.1;
    edu = renda * 0.25;
    alimentacao = renda * 0.3;
    vest = renda * 0.1;
    lazer = renda * 0.05;
    outros = renda * 0.2;
    
    printf ("\nValor aplicado em saúde: %.2lf\n", saude);
    printf ("Valor aplicado em educação: %.2lf\n", edu);
    printf ("Valor aplicado em alimentação: %.2lf\n", alimentacao);
    printf ("Valor aplicado em vestuário: %.2lf\n", vest);
    printf ("Valor aplicado em lazer: %.2lf\n", lazer);
    printf ("Valor aplicado em outros: %.2lf\n", outros);

    return 0;
}