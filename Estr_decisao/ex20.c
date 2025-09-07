/**
 * @file ex11.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que, tendo como dados de entrada o pre�o de um produto e seu c�digo de
origem, mostre o pre�o junto de sua proced�ncia. Caso o c�digo n�o seja nenhum dos especificados,
o produto deve ser encarado com importado. 1- SUL; 2- NORTE; 3- LESTE; 4- OESTE; 5 ou 6- 
NORDESTE; 7, 8 ou 9 - SUDESTE; 10 at� 20 - CENTRO-OESTE; 25 at� 30 - NORDESTE.  
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

    printf ("Insira o pre�o do produto: ");
    scanf ("%lf", &preco);
    printf ("Insira o c�digo de origem: ");
    scanf ("%d", &codigo);
    
    if (codigo == 1) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Sul.\n", preco);    
    } else if (codigo == 2) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Norte.\n", preco); 
    } else if (codigo == 3) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Leste.\n", preco); 
    } else if (codigo == 4) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Oeste.\n", preco); 
    } else if (codigo == 5 || codigo == 6) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Nordeste.\n", preco); 
    } else if (codigo >= 7 && codigo <= 9) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Sudeste.\n", preco); 
    } else if (codigo >= 10 && codigo <= 20) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Centro-Oeste.\n", preco); 
    } else if (codigo >= 25 && codigo <= 30) {
        printf ("\nPre�o: %.2lf. Proced�ncia: Nordeste.\n", preco);
    }

    return 0;
}