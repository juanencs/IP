/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Ler um n�mero e imprimir a raiz quadrada do n�mero caso ele seja positivo ou igual a zero e o quadrado do n�mero, caso ele seja negativo.
 * @version 0.1
 * @date 2025-09-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    double n, raizq, quadrado; 

    printf ("Insira o valor de n: ");
    scanf ("%lf", &n);

    raizq = sqrt(n);
    quadrado = pow(n, 2);

    if (n >= 0) {
        printf ("\nRaiz quadrada de n: %.2lf\n", raizq);
    } else if (n < 0) {
        printf ("\nQuadrado de n: %.2lf\n", quadrado);
    }

    return 0;
}