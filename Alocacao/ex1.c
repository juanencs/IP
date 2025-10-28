/**
 * @file ex1.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o número
de matrícula do aluno, seu nome e as notas de três provas. Escreva um programa que mostre o
tamanho em byte dessa estrutura.
 * @version 0.1
 * @date 2025-10-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina_aluno {
    char nome[50];
    int matricula;
    double n1, n2, n3;
} Aluno;

int main() {

    Aluno dados;

    printf ("=============DADOS DO ALUNO=============\n");
    printf ("Insira o nome: ");
    scanf ("%49[^\n]", dados.nome);
    getchar();

    printf ("Insira a matricula: ");
    scanf ("%d", &dados.matricula);

    printf ("Nota 1: ");
    scanf ("%lf", &dados.n1);

    printf ("Nota 2: ");
    scanf ("%lf", &dados.n2);

    printf ("Nota 3: ");
    scanf ("%lf", &dados.n3);
    printf ("========================================\n");

    printf("\nTamanho em bytes da estrutura Aluno: %zu\n", sizeof(Aluno));
    
    return 0;
}