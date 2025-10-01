// Faça a soma dos elementos de uma matriz bidimensional 3x3.
#include <stdio.h>
#define TAM 3

int main() {

    int matriz[TAM][TAM];
    int i, j, soma = 0;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf ("Insira os valores os elementos da matriz[%d][%d]: ", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    printf ("\nA soma dos elementos da matriz eh: %d\n", soma);

    return 0;
}
