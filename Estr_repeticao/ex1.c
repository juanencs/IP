/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa que calcule potencias. O usuerio deve digitar a base e o expoente, e o programa deve
apresentar o resultado (sem usar o comando pow). Assuma que o usuerio ire digitar valores positivos.
 * @version 0.1
 * @date 2025-09-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int base, expoente, resultado;
    int i; 


    printf ("Insira o valor da base: ");
    scanf ("%d", &base);
    printf ("Insira o valor do expoente: ");
    scanf ("%d", &expoente);

    resultado = 1;
    for (i = 0; i < expoente; i++) {
        resultado *= base;
    }
       
    printf ("\nResultado da potencia: %d\n", resultado);

    return 0;
}