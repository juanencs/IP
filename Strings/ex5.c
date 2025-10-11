/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa para ler um nome do teclado. Imprima o nome como foi lido e também
imprima o nome de trás para a frente. Tente não usar string ou vetor auxiliar.
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
    string[strcspn(string, "\n")] = '\0';
    
    printf ("\nNome digitado: ");
    fputs (string, stdout);

    printf ("\nNome invertido: ");
    for (i = strlen(string) - 1; i >= 0; i--) {
        printf ("%c", string[i]);
    }
    printf ("\n");

    return 0;
}