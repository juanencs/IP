/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie um programa que crie um arquivo chamado "dados.txt" e escreva nele a frase "Olá,
Mundo!". Em seguida leia o conteúdo do arquivo "dados.txt" e o imprima na tela.
 * @version 0.1
 * @date 2025-11-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main () {

    char string[20] = "Olá, Mundo!\n";
    int resultado; 

    FILE *arq;

    arq = fopen("dados.txt", "w");
    if (arq == NULL) {
        printf ("Erro ao criar o arquivo!\n");
        system("pause");
        exit(1);
    }

    resultado = fputs(string, arq);
    if (resultado == EOF) {
        printf("Erro na gravação!");
        system("pause");
        exit(1);
    } else {
        printf ("%s", string);
    }
    
    fclose(arq);
        
    return 0;
}