/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um procedimento que receba a idade de um nadador por parâmetro e retorna a categoria
 * desse nadador.
 * @version 0.1
 * @date 2025-10-07
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int categoria_nadador (int idade) {

    if (idade >= 5 && idade <= 7) {
        printf ("\nCategoria: Infatil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf ("\nCategoria: Infatil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf ("\nCategoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf ("\nCategoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf ("\nCategoria: Adulto\n");
    } else {
        printf ("\nSem categoria para essa idade.\n");
    }
}

int main() {

    int idade;

    printf ("Insira a idade do nadador: ");
    scanf ("%d", &idade);

    categoria_nadador(idade);

    return 0;
}