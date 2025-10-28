/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Desenvolva um programa que cria uma estrutura aninhada para o cadastro de uma agenda telefônica.
A agenda é composta pelos dados da pessoa e as informações de seu endereço. Para a pessoa
informe: nome completo, idade, Instagram, telefone e endereço. Para o endereço informe: logradouro,
numero, CEP, cidade e estado. Realize o preenchimento das informações via ponteiro para estrutura e ao final, 
limpe a tela, mostre uma mensagem informativa e então os dados da pessoa. Não é preciso criar um vetor de pessoas.
 * @version 0.1
 * @date 2025-10-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct endereco {
    char logradouro[100];
    char cidade[50];
    char estado[30];
    char cep[10];
    int numero;
} endereco;

typedef struct pessoa {
    char nome[100];
    char instagram[30];
    char telefone[20];
    int idade; 
    endereco end;
} pessoa;

int main() {

    pessoa p1;
    pessoa *ptr = &p1;

    printf ("=============DADOS DA PESSOA=============\n\n");
    
    printf ("Nome: ");
    scanf (" %99[^\n]", ptr->nome);
    getchar();

    printf ("Idade: ");
    scanf ("%d", &ptr->idade);

    printf ("Instagram: ");
    scanf (" %29[^\n]", ptr->instagram);
    getchar();

    printf ("Telefone: ");
    scanf ("%19[^\n]", ptr->telefone);
    getchar();

    printf ("\n============DADOS DE ENDERECO============\n\n");

    printf ("Logradouro: ");
    scanf (" %99[^\n]", ptr->end.logradouro);
    getchar();

    printf ("Numero: ");
    scanf ("%d", &ptr->end.numero);

    printf ("CEP: ");
    scanf (" %9[^\n]", ptr->end.cep);
    getchar();
    
    printf ("Cidade: ");
    scanf (" %49[^\n]", ptr->end.cidade);
    getchar();

    printf ("Estado: ");
    scanf ("%29[^\n]", ptr->end.estado);
    getchar();

    system("clear");

    printf ("=======================================\n");
    printf ("    Cadastro realizado com sucesso!\n\n");

    printf ("Nome: %s\n", ptr->nome);
    printf ("Idade: %d\n", ptr->idade);
    printf ("Instagram: %s\n", ptr->instagram);
    printf ("Telefone: %s\n", ptr->telefone);
    printf ("Endereço: %s, %d, %s, %s, %s.\n\n", ptr->end.logradouro, ptr->end.numero, 
                       ptr->end.cep, ptr->end.cidade, ptr->end.estado);
    
    return 0;
}