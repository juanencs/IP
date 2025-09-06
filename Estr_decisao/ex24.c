/**
 * @file ex22.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que receba a idade e o peso de uma pessoa, verifique e mostre 
o grupo de risco em que a pessoa se enquadra de acordo com a tabela a seguir.
    
     IDADE     |                   PESO               
               |      <60       >=60 e <90       >=90
      <20      |       9             8             7
  >=20 e <50   |       6             5             4
     >=50      |       3             2             1  

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

    int idade;
    double peso; 

    printf ("Insira a sua idade: ");
    scanf ("%d", &idade);
    printf ("Insira o seu peso: ");
    scanf ("%lf", &peso);

    if (idade < 20) {
        if (peso < 60) {
            printf ("\nGrupo de risco: 9.\n");
        }
        if (peso >=60 && peso < 90) {
            printf ("\nGrupo de risco: 8.\n");
        }
        if (peso >= 90) {
            printf ("\nGrupo de risco: 7.\n");
        } 
    }
    if (idade >= 20 && idade < 50) {
        if (peso < 60) {
            printf ("\nGrupo de risco: 6.\n");
        }
        if (peso >=60 && peso < 90) {
            printf ("\nGrupo de risco: 5.\n");
        }
        if (peso >= 90) {
            printf ("\nGrupo de risco: 4.\n");
        }
    }
    if (idade >= 50) {
        if (peso < 60) {
            printf ("\nGrupo de risco: 3.\n");
        }
        if (peso >=60 && peso < 90) {
            printf ("\nGrupo de risco: 2.\n");
        }
        if (peso >= 90) {
            printf ("\nGrupo de risco: 1.\n");
        } 
    }

    return 0;
}


