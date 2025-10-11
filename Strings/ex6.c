/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie um programa que:
a) possua uma função que transforma todos os caracteres de uma string em maiúsculos.
b) possua uma função que transforma todos os caracteres de uma string em minúsculos.
 * @version 0.1
 * @date 2025-10-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM 10000

int main() {

    char string[TAM];
    int i, op;

    printf ("Deseja imprimir caracteres maiusculos ou minusculos?\n");
    printf ("1- maiusculo\n2- minusculo\n");
    scanf ("%d", &op);
    getchar();

    printf ("\nInsira a string desejada: ");
    fgets (string, TAM, stdin);
    
    if (op == 1) {
        for (i = 0; string[i] != '\0'; i++) {
            string[i] = toupper(string[i]);
        }
    } else {
        for (i = 0; string[i] != '\0'; i++) {
            string[i] = tolower(string[i]);
        }
    }
    printf ("\n");
    fputs(string, stdout);
}