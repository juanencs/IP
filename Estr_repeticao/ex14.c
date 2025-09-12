/**
 * @file ex14.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faça um programa que imprima todos os números primos existentes entre N1 e N2, em que N1 e N2 são
números naturais fornecidos pelo usuário.
 * @version 0.1
 * @date 2025-09-12
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int n1, n2, i, j, cont, temp;

    printf("Insira o número N1: ");
    scanf("%d", &n1);
    printf("Insira o número N2: ");
    scanf("%d", &n2);

    if (n1 < 1 || n2 < 1) {
        printf("\nN1 e N2 devem ser naturais (maiores ou iguais a 1).\n");
        return 1;
    }

    if (n1 > n2) { // if com variável temporária para que independente da ordem
        temp = n1; // das entradas, o valor de n1 seja sempre o menor.
        n1 = n2;
        n2 = temp;
    }

    printf("Números primos entre %d e %d:\n", n1, n2);

    for (i = n1; i <= n2; i++) {    // i: variável de controle para o intervalo de números.
        cont = 0;
        for (j = 1; j <= i; j++) {  // j: variável de controle para verificação de nº primo.
            if (i % j == 0)
            cont++;
        }
        if (cont == 2) {
            printf("%d\n", i);
        }
    }

    return 0;
}