/**
 * @file ex13.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Luciana distribui sua renda mensal da seguinte forma: 10% sa�de, 25% educa��o, 30%
alimenta��o, 10% vestu�rio; 5% lazer, 20% outros. Fa�a um programa que leia a renda mensal
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
    
    printf ("\nValor aplicado em sa�de: %.2lf\n", saude);
    printf ("Valor aplicado em educa��o: %.2lf\n", edu);
    printf ("Valor aplicado em alimenta��o: %.2lf\n", alimentacao);
    printf ("Valor aplicado em vestu�rio: %.2lf\n", vest);
    printf ("Valor aplicado em lazer: %.2lf\n", lazer);
    printf ("Valor aplicado em outros: %.2lf\n", outros);

    return 0;
}