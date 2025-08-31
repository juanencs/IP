/**
 * @file ex18.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Elabore um programa que leia um número no formato CDU (centena dezena unidade) e exiba o
número invertido: UDC (unidade dezena centena). O número deverá ser armazenado em outra
variável antes de ser impresso.
 * @version 0.1
 * @date 2025-08-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main()
{
    int invertido, num; 
    int centena = 0, dezena = 0, unidade = 0;
    
    printf ("Insira um número de 3 algarismos (CDU): ");
    scanf ("%d", &num);
    
    unidade = num % 10;
    dezena = num % 100 - unidade;
    centena = num - dezena - unidade;
    invertido = unidade*100 + dezena + centena/100;
    
    printf ("\nNúmero invertido (UDC): %d\n", invertido);
    
    return 0;
}
