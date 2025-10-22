/**
 * @file ex4.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie um vetor de registros de funcionarios e informe os dados via teclado. Um funcionario possui
nome, cargo, salario-base, CPF e departamento. Em seguida, calcule e exiba o salario medio de
todos os funcionarios. No calculo de cada salario considere os seguintes adicionais, a partir do
salario-base, por cargo: Assistente (5%), Supervisor (10%), Gerente(15%), Outras categorias (2%).
Obs.: salario-base contempla somente o valor registrado em carteira/tabela de remuneração
 * @version 0.1
 * @date 2025-10-16
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario {
    char nome[100];
    int cargo;
    char cpf[13];
    char departamento[40];
    double salario_base;        
};

typedef struct funcionario funcionario;

int main() {

    int i, quant_fun;
    double soma = 0, salario_medio;

    printf ("Insira a quantidade de funcionarios da empresa: ");
    scanf ("%d", &quant_fun);
    getchar();

    funcionario registro[quant_fun];

    for (i = 0; i < quant_fun; i++){
        printf ("\nInsira os dados do funcionario (%d):\n", i+1);

        printf ("Nome: ");
        fgets(registro[i].nome, 100, stdin);
        registro[i].nome[strcspn(registro[i].nome, "\n")] = '\0';

        printf ("Insira o cargo desejado:\n");
        printf ("1- Assistente\n");
        printf ("2- Supervisor\n");
        printf ("3- Gerente\n");
        printf ("4- Outras categorias\n");
        scanf ("%d", &registro[i].cargo);

        if (registro[i].cargo < 1 || registro[i].cargo > 4) {    
            printf ("\nCargo inválido para a empresa!\n");
            return 1;
        }

        printf ("Salario: ");
        scanf ("%lf", &registro[i].salario_base);
        getchar();

        if (registro[i].cargo == 1) {
            registro[i].salario_base += registro[i].salario_base * 0.05;
        } else if (registro[i].cargo == 2) {
            registro[i].salario_base += registro[i].salario_base * 0.10;
        } else if (registro[i].cargo == 3) {
            registro[i].salario_base += registro[i].salario_base * 0.15;
        } else if (registro[i].cargo == 4) {
            registro[i].salario_base += registro[i].salario_base * 0.02;
        }

        soma += registro[i].salario_base;

        printf ("CPF: ");
        fgets(registro[i].cpf, 13, stdin);
        registro[i].cpf[strcspn(registro[i].cpf, "\n")] = '\0';

        printf ("Departamento: ");
        fgets(registro[i].departamento, 40, stdin);
        registro[i].departamento[strcspn(registro[i].departamento, "\n")] = '\0';

    }
    system ("clear");

    for (i = 0; i < quant_fun; i++) {
        printf ("---------------------------------------------------\n");
        printf ("Dados do funcionario (%d):\n", i+1);
        printf ("Nome: %s\n", registro[i].nome);
        printf ("Cargo: %d\n", registro[i].cargo);
        printf ("Salario: %.2lf\n", registro[i].salario_base);
        printf ("CPF: %s\n", registro[i].cpf);
        printf ("Departamento: %s\n", registro[i].departamento);
    }
    
    salario_medio = soma / quant_fun;
    printf ("---------------------------------------------------\n");
    printf ("Salario medio dos funcionarios: %.2lf\n", salario_medio);
    
    return 0;
}