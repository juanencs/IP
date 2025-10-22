/**
 * @file ex1.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2025-10-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *vet;
    vet = (int *) malloc(5 * sizeof(int));    

    for (int i = 0; i < 5; i++) {
        vet[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        printf ("Valor em vet: %d\n", vet[i]);
    }

    free (vet);
    vet = NULL;
    return 0;
}