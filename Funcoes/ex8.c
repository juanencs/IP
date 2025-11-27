/**
 * @file ex8.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa em C que utilize uma função para calcular a média, o valor máximo e o
valor mínimo de um conjunto de números inteiros fornecidos pelo usuário. A função deve
retornar esses três valores utilizando uma estrutura.
 * @version 0.1
 * @date 2025-11-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double media;
    int minimo;
    int maximo;
} Estatistica;

Estatistica calcular_estatistica(const int *numeros, int quantidade) {
    Estatistica resultado = {0.0, 0, 0};
    if (quantidade <= 0) return resultado;

    long soma = numeros[0];
    int min = numeros[0], max = numeros[0];

    for (int i = 1; i < quantidade; i++) {
        soma += numeros[i];
        if (numeros[i] < min) min = numeros[i];
        if (numeros[i] > max) max = numeros[i];
    }

    resultado.media = (double)soma / quantidade;
    resultado.minimo = min;
    resultado.maximo = max;
    return resultado;
}

int main(void) {

    int quantidade;

    printf("Quantidade de numeros: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    int *numeros = malloc(sizeof *numeros * quantidade);
    if (!numeros) {
        printf("Falha na alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Numero %d: ", i + 1);
        if (scanf("%d", &numeros[i]) != 1) {
            printf("Entrada invalida.\n");
            free(numeros);
            return 1;
        }
    }

    Estatistica est = calcular_estatistica(numeros, quantidade);
    printf("\nMedia: %.2f\n", est.media);
    printf ("Minimo: %d\n", est.minimo);
    printf ("Maximo: %d\n", est.maximo);

    free(numeros);
    return 0;
}