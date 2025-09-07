/**
 * @file ex11.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que, tendo como dados de entrada o preço de um produto e seu código de
origem, mostre o preço junto de sua procedência. Caso o código não seja nenhum dos especificados,
o produto deve ser encarado com importado. 1- SUL; 2- NORTE; 3- LESTE; 4- OESTE; 5 ou 6- 
NORDESTE; 7, 8 ou 9 - SUDESTE; 10 até 20 - CENTRO-OESTE; 25 até 30 - NORDESTE.  
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

    double preco;
    int codigo; 

    printf ("Insira o preço do produto: ");
    scanf ("%lf", &preco);
    printf ("Insira o código de origem: ");
    scanf ("%d", &codigo);
    
    if (codigo == 1) {
        printf ("\nPreço: %.2lf. Procedência: Sul.\n", preco);    
    } else if (codigo == 2) {
        printf ("\nPreço: %.2lf. Procedência: Norte.\n", preco); 
    } else if (codigo == 3) {
        printf ("\nPreço: %.2lf. Procedência: Leste.\n", preco); 
    } else if (codigo == 4) {
        printf ("\nPreço: %.2lf. Procedência: Oeste.\n", preco); 
    } else if (codigo == 5 || codigo == 6) {
        printf ("\nPreço: %.2lf. Procedência: Nordeste.\n", preco); 
    } else if (codigo >= 7 && codigo <= 9) {
        printf ("\nPreço: %.2lf. Procedência: Sudeste.\n", preco); 
    } else if (codigo >= 10 && codigo <= 20) {
        printf ("\nPreço: %.2lf. Procedência: Centro-Oeste.\n", preco); 
    } else if (codigo >= 25 && codigo <= 30) {
        printf ("\nPreço: %.2lf. Procedência: Nordeste.\n", preco);
    }

    return 0;
}