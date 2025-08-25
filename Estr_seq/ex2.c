/**
 * @file ex2.c
 * @author Juan Enrico
 * @brief Uma pessoa está construindo e resolveu colocar em sua casa uma caixa para servir como reservatório de água. 
 Considerando que a caixa seja retangular, faça um programa que leia as dimensões da caixa (comprimento, altura e largura), 
 calcule e escreva o volume de água que pode ser armazenado.
 * @version 0.1
 * @date 2025-08-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double comprimento, largura, altura, volume;

    printf ("== Insira as medidas da caixa dágua ==\n");

    printf ("Comprimento (m): ");
    scanf ("%lf", &comprimento);

    printf ("Largura (m): ");
    scanf ("%lf", &largura);

    printf ("Altura (m): ");
    scanf ("%lf", &altura);

    volume = comprimento * largura * altura;

    printf ("O volume de água que pode ser armazenado é de: %.2lf m³.\n", volume);

    return 0;
}
