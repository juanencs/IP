/**
 * @file ex10.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Implemente um programa que receba a idade de uma pessoa e imprima mensagem de acordo
com os critérios:
- Menor de 16 anos:MENOR
- Entre 16 e 18 anos: EMANCIPADO
- Maior de 18 anos: MAIOR
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int idade;

    printf ("Insira a sua idade: ");
    scanf ("%d", &idade);

    if (idade < 16) {
        printf ("\nMenor de idade.\n");
    } else if (idade > 15 && idade < 18) {
        printf ("\nEmancipado!\n");
    } else if (idade >= 18) {
        printf ("\nMaior de idade!\n");
    }

    return 0;
}