/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie uma estrutura do tipo Ponto para representar as coordenadas de um ponto no plano
cartesiano (posições A e B). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles. 
 * @version 0.1
 * @date 2025-10-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>
#define TAM 2

typedef struct Produto {
    int x[TAM];
    int y[TAM];
} Produto;

int main() {

    Produto posicao;
    double distancia;

    for (int i = 0; i < TAM; i++) {
        printf ("Insira o valor de x do ponto %d: ", i+1);
        scanf ("%d", &posicao.x[i]);
        printf ("Insira o valor de y do ponto %d: ", i+1);
        scanf ("%d", &posicao.y[i]);
    }  

    distancia = sqrt(pow(posicao.x[1] - posicao.x[0], 2) + pow(posicao.y[1] - posicao.y[0], 2));
    
    printf ("\n\nPonto 1: (%d, %d)\n", posicao.x[0], posicao.y[0]);
    printf ("Ponto 2: (%d, %d)\n", posicao.x[1], posicao.y[1]);
    printf ("Distancia entre os pontos: %.2lf\n", distancia);

    return 0;
}