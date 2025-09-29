// Faça um programa para ler dois vetores, A e B, com 10 números inteiros cada um e obtenha e imprima um terceiro vetor C = A + B.
#include <stdio.h>

int main() {

    int vetA[10];
    int vetB[10];
    int vetC[10];
    int i;


    for (i = 0; i < 10; i++) {
        printf ("Insira o valor da posição %d no vetor A: ", i+1);
        scanf ("%d", &vetA[i]);
        printf ("Insira o valor da posição %d no vetor B: ", i+1);
        scanf ("%d", &vetB[i]);
        printf ("\n");
    }

    for (i = 0; i < 10; i++) {
        vetC[i] = vetA[i] + vetB[i];
    }

    for (i = 0; i < 10; i++) {
        printf ("%d ", vetC[i]);
    }
    printf ("\n");

    return 0;
}