/**
 * @file ex2.c
 * @author Juan Enrico
 * @brief Uma pessoa est� construindo e resolveu colocar em sua casa uma caixa para servir como reservat�rio de �gua. 
 Considerando que a caixa seja retangular, fa�a um programa que leia as dimens�es da caixa (comprimento, altura e largura), 
 calcule e escreva o volume de �gua que pode ser armazenado.
 * @version 0.1
 * @date 2025-08-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double comprimento, largura, altura, volume;

    printf ("== Insira as medidas da caixa d�gua ==\n");

    printf ("Comprimento (m): ");
    scanf ("%lf", &comprimento);

    printf ("Largura (m): ");
    scanf ("%lf", &largura);

    printf ("Altura (m): ");
    scanf ("%lf", &altura);

    volume = comprimento * largura * altura;

    printf ("O volume de �gua que pode ser armazenado � de: %.2lf m�.\n", volume);

    return 0;
}
