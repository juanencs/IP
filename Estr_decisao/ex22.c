/**
 * @file ex22.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que receba a idade de um nadador e imprima a sua categoria seguindo as
regras: infantil A (5-7 anos); infantil B (8-10 anos); juvenil A (11-13 anos); juvenil B (14-17 anos).
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int idade; 

    printf ("Insira a idade do nadador: ");
    scanf ("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf ("\nCategoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf ("\nCategoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf ("\nCategoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf ("\nCategoria: Juvenil B\n");
    } else {
        printf ("\nFora da faixa etaria!\n");
    } 

    return 0;
}