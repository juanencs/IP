/*
1. Crie um programa que leia um nome (nome de um ser humano) e imprima em tela usando printf
e scanf.
2. Use o mesmo programa para ler nome e sobrenome juntos e imprimir em tela. 
3. Faça o mesmo usando a função fgets e fputs.
4. Leia uma lista de 5 nomes (nomes e sobrenomes) e imprima-os em tela.
5. Receba uma string qualquer do usuário de tamanho 50 e copie para outra string. 
*/
#include <stdio.h>
#include <string.h>

int main() {

    char nome[100];

    printf ("Insira o seu nome: ");
    fgets (nome, 100, stdin);
    printf ("\n");
    fputs (nome, stdout);

    return 0;
}