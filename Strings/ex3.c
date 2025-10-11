/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que, dada uma lista de 5 nomes, coloque-os em ordem alfabética. Utilize a
função strcpy(destino, origem).
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

    int i, j;
    char nomes[5][TAM], troca[TAM];

    for (i = 0; i < 5; i++) {
        printf ("Insira o %dº nome: ", i+1);
        fgets (nomes[i], TAM, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    for (i = 0; i < 4; i++) {
        for (j = i+1; j < 5; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(troca, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], troca);
            }
        }
    }

    printf ("\nNomes em ordem alfabética:\n");
    for (i = 0; i < 5; i++) {
        fputs (nomes[i], stdout);
        printf ("\n");
    }

    return 0;
}