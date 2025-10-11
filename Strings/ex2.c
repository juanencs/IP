/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Leia duas strings. Se as strings forem iguais, escreva “STRINGS IGUAIS”. Caso contrário,
concatene as duas strings e imprima a string resultante.
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

    char string1[TAM], string2[TAM];

    printf ("Insira a string 1: ");
    fgets (string1, TAM, stdin);
    string1[strcspn(string1, "\n")] = '\0';

    printf ("Insira a string 2: ");
    fgets (string2, TAM, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    if (strcmp(string1, string2) == 0) {
        printf ("\nSTRINGS IGUAIS!\n");
    } else {
        printf ("\nString resultante: ");
        strcat (string1, string2);
        fputs (string1, stdout);
        printf ("\n");
    }
    
    return 0;
}