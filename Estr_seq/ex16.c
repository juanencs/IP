/**
 * @file ex16.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Uma instituição de ensino realizou uma pesquisa sobre os eleitores de um município que
participaram da ultima eleição. Faça um programa que leia o total de votos brancos, nulos e
válidos. Calcule e escreva o percentual que cada um representa em relação ao total de eleitores.
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

    int eleitores, brancos, nulos, validos;
    double perc_brancos, perc_nulos, perc_validos;

    printf ("Insira o total de votos brancos: ");
    scanf ("%d", &brancos);

    printf ("Insira o total de votos nulos: ");
    scanf ("%d", &nulos);

    printf ("Insira o total de votos válidos: ");
    scanf ("%d", &validos);
    
    eleitores = brancos + nulos + validos;
    perc_brancos = brancos * 100.0 / eleitores;
    perc_nulos = nulos * 100.0 / eleitores;
    perc_validos = validos * 100.0 / eleitores;

    printf ("\nPercentual que os votos BRANCOS representam: %.2lf\n", perc_brancos);
    printf ("Percentual que os votos NULOS representam: %.2lf\n", perc_nulos);
    printf ("Percentual que os votos VALIDOS representam: %.2lf\n", perc_validos);

    return 0;
}