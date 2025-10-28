/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie um programa que contenha um array de inteiros contendo cinco elementos (pode ser definido na
inicialização ou preenchido pelo usuário). Modifique os valores do vetor usando aritmética de
ponteiros.
 * @version 0.1
 * @date 2025-10-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int vet[] = {10, 20, 30, 40, 50};
    int i, *p;

    printf ("Valores originais:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    p = vet;
    for (i = 1; i < 5; i++) {
        *(p + i) = *(p + i - 1) * 2;    // Cada valor é o dobro do anterior
    }

    printf("\nValores modificados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}