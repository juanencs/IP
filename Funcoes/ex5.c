/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que invoca uma função que recebe a média final de um aluno por
parâmetro e retorna o seu conceito.
 * @version 0.1
 * @date 2025-10-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

void conceito_aluno (double media) {

    if (media >= 0.0 && media <= 4.9) {
        printf ("\nConceito: D\n");
    } else if (media >= 5.0 && media <= 6.9) {
        printf ("\nConceito: C\n");
    } else if (media >= 7.0 && media <= 8.9) {
        printf ("\nConceito: B\n");
    } else if (media >= 9.0 && media <= 10.0) {
        printf ("\nConceito: A\n");
    } else {
        printf ("\nMedia invalida.\n");
    }
}

int main() {

    double media;

    printf ("Insira a media do aluno (0 a 10): ");
    scanf ("%lf", &media);

    conceito_aluno(media);

    return 0;
}