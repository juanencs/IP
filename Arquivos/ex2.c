/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie um programa que conte o número de linhas em um arquivo de texto.
 * @version 0.1
 * @date 2025-11-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main () {

    char string[256] = "dados.txt";
    int linhas = 0; 
    int caractere, ultima;
    long tamanho;

    FILE *arq;

    arq = fopen(string, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        system("pause");
        exit(1);
    }

    while ((caractere = fgetc(arq)) != EOF) {
        if (caractere == '\n') {
            linhas++;
        }
    }

    fseek(arq, 0, SEEK_END);
    tamanho = ftell(arq);

    if (tamanho > 0) {
        fseek(arq, -1, SEEK_END);
        ultima = fgetc(arq);
        if (ultima != '\n') {
            linhas++;
        }
    }

    printf("Número de linhas em '%s': %d\n", string, linhas);

    fclose(arq);
        
    return 0;
}