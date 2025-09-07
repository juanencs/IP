/**
 * @file ex21.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que diga se um caracter informado pelo usu�rio �: uma vogal mai�scula,
um n�mero inteiro de 0 a 9 ou um operador aritm�tico. Se o usu�rio informar algo diferente do que
foi mencionado anteriormente, emitir uma mensagem.
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    char carac;

    printf ("Informe um caracter: ");
    scanf (" %c", &carac);

    if (carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U') {
        printf ("\nVOGAL MAIUSCULA!\n");
    } else if (carac >= '0' && carac <= '9') {
        printf ("\nINTEIRO DE 0 AT� 9!\n");
    } else if (carac == '+' || carac == '-' || carac == '*' || carac == '/' || carac == '%') {
        printf ("\nOPERADOR ARITM�TICO!\n");
    } else {
        printf ("\nCARACTER N�O IDENTIFICADO!\n");
    }
    
    return 0;
}