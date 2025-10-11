/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que, dada uma string imprima todos os caracteres que se encontram nas
posições ímpares. Imprima também o nome digitado
 * @version 0.1
 * @date 2025-10-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>
#define TAM 10000

int main() {

    int i;
    char string[TAM];

    printf ("Insira o nome desejado: ");
    fgets (string, TAM, stdin);
    
    printf ("\nNome digitado: ");
    fputs (string, stdout);

    printf ("Caracteres em posições ímpares: ");
    for (i = 0; i < strlen(string); i++) {
        if (i % 2 != 0) {
            printf ("%c", string[i]);
        }
    }
    printf ("\n");

    return 0;
}