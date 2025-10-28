/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço
 * @version 0.1
 * @date 2025-10-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int var1, var2;
    int *ptr1, *ptr2;

    printf ("Insira a variavel 1: ");
    scanf ("%d", &var1);
    printf ("Insira a variavel 2: ");
    scanf ("%d", &var2);

    ptr1 = &var1;
    ptr2 = &var2;

    if (ptr1 > ptr2) {
        printf ("\nMaior endereco: %p | Conteudo: %d\n", (void*)ptr1, *ptr1);
    } else {
        printf ("\nMaior endereco: %p | Conteudo: %d\n", (void*)ptr2, *ptr2);
    }

    return 0;
}