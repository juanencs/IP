/*Elabore um programa para somar todos os elementos de uma matriz. Em seguida, mostrar 
o maior elemento dessa matriz.*/
#include <stdio.h>
#define TAM 3

int main() {

    int matriz[TAM][TAM];
    int i, j, maior = 0, soma = 0;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf ("Insira os valores os elementos da matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
            soma += matriz[i][j];

            if (maior < matriz[i][j]) {
                maior = matriz[i][j];
            }
        }
    }
    printf ("\nA soma dos elementos da matriz eh: %d\n", soma);
    printf ("Maior elemento da matriz eh: %d\n", maior);


    return 0;
}