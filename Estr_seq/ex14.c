/**
 * @file ex14.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que leia quantos minutos, em média, um estudante gastou para estudar
Introdução à Computação. Calcule e escreva quanto tempo, em horas, ela estudou ao final de 30
dias.
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

    int min;
    double horas; 

    printf ("Insira o tempo de estudo em IP, em minutos: ");
    scanf ("%d", &min);

    horas = min / 60 * 30; 

    printf ("\nO tempo de estudo ao final de 30 dias foi de: %.2lf horas.\n", horas);

    return 0;
}