/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando
ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que
são seus divisores). A função deve retornar ao programa principal o valor 0 se o número
passado por parâmetro for perfeito e 1, caso não o seja.
 * @version 0.1
 * @date 2025-10-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int num_perfeito (int numero) {

    int i, soma = 0;

    if (numero < 1) {
        printf ("\nO número inserido deve ser positivo.\n");
        return -1;
    }
    for (i = 1; i < numero; i++) {
        
        if (numero % i == 0) {
            soma += i;
        } 
    }
    if (soma == numero) {
        return 0;
    } else {
        return 1;
    }
}

int main() {

    int numero, resultado;

    printf ("Insira o numero para saber se eh perfeito ou não (perfeito = 0; nao perfeito = 1): ");
    scanf ("%d", &numero);

    resultado = num_perfeito(numero);

    if (resultado == -1) {
        // interação nula para condição de número menor que 1;
    } else if (resultado == 0) {
        printf ("\nO numero eh perfeito!\n");
    } else {
        printf ("\nO numero nao eh perfeito!\n");
    }

    return 0;
}