/**
 * @file ex6.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Determinar se um n�mero fornecido pelo usu�rio � par ou �mpar. Imprima o n�mero e a
mensagem correspondente.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int n;

    printf ("Insira um n�mero: ");
    scanf ("%d", &n);

    if (n % 2 == 0) {
        printf ("\n%d � par!\n", n);
    } else {
        printf ("\n%d � �mpar!\n", n);
    }

    return 0;
}