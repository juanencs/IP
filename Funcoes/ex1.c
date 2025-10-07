/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que utiliza uma função que recebe por parâmetro o raio de uma esfera e
calcula o seu volume (v = 4/3π R³). O programa principal deve ler o valor do raio (quantas vezes
o usuário assim o desejar) e imprimir o(s) volume(s) calculado(s)
 * @version 0.1
 * @date 2025-10-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>
#define PI 3.14159

double volume_esfera (double raio) {

    double volume = (4.0/3.0) * PI * pow(raio, 3);
    return volume;
}

int main() {

    double volume, raio;
    char op = 'S';

    while (op == 'S' || op == 's') {
        printf ("Insira o valor do raio: ");
        scanf ("%lf", &raio);

        volume = volume_esfera(raio);

        printf ("\nVolume da esfera: %.2lf\n", volume);

        printf ("\nDeseja continuar? ('S' p/ sim | 'N' p/ nao)\n");
        scanf (" %c", &op);
        printf ("\n");
    }

    return 0;
}