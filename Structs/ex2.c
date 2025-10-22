/**
 * @file ex2.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Implemente um programa que receba o nome completo, a idade e o endereço (logradouro,
número, bairro, complemento, CEP, cidade e estado) de uma pessoa e armazene esses dados em
uma estrutura. Em seguida, imprima na tela os dados da estrutura lida. Idade inferior a zero ou maior
que 120 não devem ser aceitas.
 * @version 0.1
 * @date 2025-10-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dados_pessoa {
    char nome[100];
	char logradouro[100];
	char bairro[100];
	char complemento[100];
	char cidade[100];
	char estado[100];
    int idade;
	int numero;
	int cep;
};

typedef struct dados_pessoa dados;

int main() {

    dados pessoa;
    
    printf ("==========Dados da pessoa==========\n\n");

    printf ("Insira o nome completo: ");
    scanf ("%100[^\n]", pessoa.nome);
    getchar();
    
    printf ("Insira a idade: ");
    scanf ("%d", &pessoa.idade);
    getchar();

    if (pessoa.idade < 0 || pessoa.idade > 120) {
        printf ("\nIdade inválida!\n");
        return 1;
    }
    
    printf ("Insira os dados de endereco:\n");

    printf ("Logradouro: ");
    scanf ("%100[^\n]", pessoa.logradouro);
    getchar();

    printf ("Numero: ");
    scanf ("%d", &pessoa.numero);
    getchar();

    printf ("Bairro: ");
    scanf ("%100[^\n]", pessoa.bairro);
    getchar();

    printf ("Complemento: ");
    scanf ("%100[^\n]", pessoa.complemento);
    getchar();

    printf ("CEP: ");
    scanf ("%d", &pessoa.cep);
    getchar();

    printf ("Cidade: ");
    scanf ("%100[^\n]", pessoa.cidade);
    getchar();

    printf ("Estado: ");
    scanf ("%100[^\n]", pessoa.estado);
    getchar();

    system ("clear");

    printf ("\n===============Dados coletados===============\n\n");
    printf ("Nome completo: %s\n", pessoa.nome);
    printf ("Idade: %d\n", pessoa.idade);
    printf ("===DADOS DE ENDEREÇO===\n");
    printf ("Logradouro: %s\n", pessoa.logradouro);
    printf ("Numero: %d\n", pessoa.numero);
    printf ("Bairro: %s\n", pessoa.bairro);
    printf ("Complemento: %s\n", pessoa.complemento);
    printf ("CEP: %d\n", pessoa.cep);
    printf ("Cidade: %s\n", pessoa.cidade);
    printf ("Estado: %s\n", pessoa.estado);
    printf ("=============================================\n");
    return 0;   
}
