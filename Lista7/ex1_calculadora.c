/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Projeto de calculadora que seja capaz de executar, alem das quatro operacoes
aritmeticas binarias basicas, as operacoes de potenciacao, raiz quadrada e valor absoluto.
Fornecer um relatorio que informe:
- Ultimo resultado da calculadora
- Quantas operacoes foram realizadas
- A operacao mais usada e a menos usada
O programa nao deve:
- Usar estruturas do tipo vetor, matrizes, strings ou modularizacao
 * @version 0.1
 * @date 2025-09-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main() {

    int operacao, quant_operacoes = 0, i = 0;
    int uso_adicao = 0, uso_subtracao = 0, uso_multiplicacao = 0, uso_divisao = 0; 
    int uso_potencia = 0, uso_raiz = 0, uso_vlr_abs = 0;
    double num1, num2, resultado, ultimo_resultado;

    printf ("=========CALCULADORA=========\n");
    
    while (i == 0) {
        printf ("\nMenu de opcoes para operacoes:\n");
        printf ("1- Adicao\n");
        printf ("2- Subtracao\n");
        printf ("3- Multiplicacao\n");
        printf ("4- Divisao\n");
        printf ("5- Potenciacao\n");
        printf ("6- Radiciacao\n");
        printf ("7- Valor absoluto\n");
        printf ("8- Sair do programa\n\n");

        printf ("Insira a opcao desejada: ");
        scanf ("%d", &operacao);

        switch (operacao)
        {
        case 1:
            printf ("\nInsira o primeiro numero: ");
            scanf ("%lf", &num1);
            printf ("Insira o segundo numero: ");
            scanf ("%lf", &num2);
            resultado = num1 + num2;
            printf ("Resultado da adicao: %.2lf\n", resultado);
            uso_adicao++;
            quant_operacoes++;
            ultimo_resultado = resultado;
            break;
        
        case 2:
            printf ("\nInsira o primeiro numero: ");
            scanf ("%lf", &num1);
            printf ("Insira o segundo numero: ");
            scanf ("%lf", &num2);
            resultado = num1 - num2;
            printf ("Resultado da subtracao: %.2lf\n", resultado);
            uso_subtracao++;
            quant_operacoes++;
            ultimo_resultado = resultado;
            break;
        
        case 3:
            printf ("\nInsira o primeiro numero: ");
            scanf ("%lf", &num1);
            printf ("Insira o segundo numero: ");
            scanf ("%lf", &num2);
            resultado = num1 * num2;
            printf ("Resultado da multiplicacao: %.2lf\n", resultado);
            uso_multiplicacao++;
            quant_operacoes++;
            ultimo_resultado = resultado;
            break;
        
        case 4:
            printf ("\nInsira o primeiro numero: ");
            scanf ("%lf", &num1);
            printf ("Insira o segundo numero: ");
            scanf ("%lf", &num2);
            
            if (num2 == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2lf\n", resultado);
                uso_divisao++;
                quant_operacoes++;
                ultimo_resultado = resultado;
            }
            break;
        
        case 5:
            printf ("\nInsira a base: ");
            scanf ("%lf", &num1);
            printf ("Insira o expoente: ");
            scanf ("%lf", &num2);
            resultado = pow(num1, num2);
            printf ("Resultado da potenciacao: %.2lf\n", resultado);
            uso_potencia++;
            quant_operacoes++;
            ultimo_resultado = resultado;
            break;
        
        case 6:
            if (num1 < 0) {
                printf("Erro: raiz de numero negativo!\n");
            } else {
                resultado = sqrt(num1);
                printf("Resultado da raiz quadrada: %.2lf\n", resultado);
                uso_raiz++;
                quant_operacoes++;
                ultimo_resultado = resultado;
            }
            break;
        
        case 7:
            printf ("\nInsira o numero para retornar o valor absoluto: ");
            scanf ("%lf", &num1);
            resultado = fabs(num1);
            printf ("Valor absoluto: %.5lf\n", resultado);
            uso_vlr_abs++;
            quant_operacoes++;
            ultimo_resultado = resultado;
            break;
        
        case 8:
            i = 1;
            break;

        default:
            printf ("\nOPCAO INVALIDA!\n");
            break;
        }
    }
    if (quant_operacoes == 0) {
        printf ("\nSaida imediata! Resultados ou operacoes inexistentes.\n");
        return 1;
    } else { 
        printf ("\nUltimo resultado da calculadora: %.5lf\n", ultimo_resultado);
    }
    printf ("Quantidade de operacoes realizadas: %d\n", quant_operacoes);
    
    // variaveis para definir a primeira interacao e prosseguir para as condicionais seguintes
    int op_mais_usada = 1, op_menos_usada = 1;
    int mais = uso_adicao, menos = uso_adicao; 

    // logica condicional usada para saber qual a opcao mais usada.
    if (uso_subtracao > mais) {
        mais = uso_subtracao;
        op_mais_usada = 2;
    } else if (uso_multiplicacao > mais) {
        mais = uso_multiplicacao;
        op_mais_usada = 3;
    } else if (uso_divisao > mais) {
        mais = uso_divisao;
        op_mais_usada = 4;
    } else if (uso_potencia > mais) {
        mais = uso_potencia;
        op_mais_usada = 5;
    } else if (uso_raiz > mais) {
        mais = uso_raiz;
        op_mais_usada = 6;
    } else if (uso_vlr_abs > mais) {
        mais = uso_vlr_abs;
        op_mais_usada = 7;
    }

    // logica condicional usada para saber qual a opcao menos usada. 
    if (uso_subtracao < menos && uso_subtracao > 0) {
        menos = uso_subtracao;
        op_menos_usada = 2;
    } else if (uso_multiplicacao < menos && uso_multiplicacao > 0) {
        menos = uso_multiplicacao;
        op_menos_usada = 3;
    } else if (uso_divisao < menos && uso_divisao > 0) {
        menos = uso_divisao;
        op_menos_usada = 4;
    } else if (uso_potencia < menos && uso_potencia > 0) {
        menos = uso_potencia;
        op_menos_usada = 5;
    } else if (uso_raiz < menos && uso_raiz > 0) {
        menos = uso_raiz;
        op_menos_usada = 6;
    } else if (uso_vlr_abs < menos && uso_vlr_abs > 0) {
        menos = uso_vlr_abs;
        op_menos_usada = 7;
    }

    printf("Operacao mais usada: %d\n", op_mais_usada);
    printf("Operacao menos usada: %d\n", op_menos_usada);

    return 0;
}