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

int main() {

    char string1[100], string2[100];

    printf ("Insira a string 1: ");
    fgets (string1, sizeof string1, stdin);
    string1[strcspn(string1, "\n")] = '\0';
    printf ("Confirmar string 2: ");
    fgets (string2, sizeof string2, stdin);
    string2[strcspn(string2, "\n")] = '\0';

    if (strcmp(string1, string2) == 0) {
        printf ("\nSTRINGS IGUAIS!\n");
    } else {
        strcat (string1, string2);
        fputs ((strcat (string1, string2)), stdout);
    }
    
    return 0;
}