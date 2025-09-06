/**
 * @file ex21.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que diga se um caracter informado pelo usuário é: uma vogal maiúscula,
um número inteiro de 0 a 9 ou um operador aritmético. Se o usuário informar algo diferente do que
foi mencionado anteriormente, emitir uma mensagem.
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int carac;

    printf ("Informe um caracter: ");
    scanf ("%d", &carac);

    if (carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U') {
        printf ("\nVOGAL MAIUSCULA!\n");
    } else if (carac >= 0 && carac <= 9) {
        printf ("\nINTEIRO DE 0 ATÉ 9!\n");
    } else if (carac == '+' || carac == '-' || carac == '*' || carac == '/' || carac == '%') {
        printf ("\nOPERADOR ARITMÉTICO!\n");
    } else {
        printf ("\nCARACTER NÃO IDENTIFICADO!\n");
    }
    

    return 0;
}