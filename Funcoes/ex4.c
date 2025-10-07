/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função
deve retornar ao programa principal o valor 0 se número passado por parâmetro for par e 1 se
for ímpar.
 * @version 0.1
 * @date 2025-10-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int num_perfeito (int numero) {

    if (numero % 2 == 0) {
        return 0;
    } else {
        return 1;
    }
}

int main() {

    int numero;

    printf ("Insira o numero para saber se eh par ou impar (par = 0; impar = 1): ");
    scanf ("%d", &numero);

    if (num_perfeito(numero) == 0) {
        printf ("\nO numero eh par!\n");
    } else {
        printf ("\nO numero eh impar!\n");
    }

    return 0;
}