/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa que receba a idade, a altura e o peso de varias pessoas. Calcule e imprima:
- a quantidade de pessoas com idade superior a 50 anos;
- a media das alturas das pessoas com idade entre 10 e 20 anos;
- a porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas.
Considere que os dados informados sao validos. Pergunte ao usuario se ele deseja continuar digitando dados ou
nao (Exemplo: 1 - Sim, Outro valor diferente de 1 - Nao)
 * @version 0.1
 * @date 2025-09-09
 *
 * @copyright Copyright (c) 2025
 *
 */
#include <stdio.h>

int main() {

    int idade, i, opcao;
    int j, k, l;
    double altura, peso, soma_altura, media_altura, peso_inferior;

    i = 0; //armazena quantidade total de pessoas. 
    j = 0; //variavel para idade inferior a 50 anos.
    k = 0; //variavel para altura entre 10 e 20 anos
    l = 0; //variavel para peso menor que 40 quilos
    soma_altura = 0;

    while (1) {
        printf("Insira a idade: ");
        scanf("%d", &idade);
        printf("Insira a altura: ");
        scanf("%lf", &altura);
        printf("Insira o peso: ");
        scanf("%lf", &peso);

        if (idade > 50)
        {
            j++;
        }
        if (idade >= 10 && idade <= 20)
        {
            soma_altura += altura;
            k++;
        }
        if (peso < 40)
        {
            l++;
        }
        i++; 

        printf("Deseja continuar inserindo dados (Sim = 1, Nao = 0): \n");
        scanf("%d", &opcao);

        if (opcao != 1)
        {
            break;
        }
    }
    media_altura = soma_altura / k;
    peso_inferior = (l * 100.0) / i;
    
    printf("\nIdade maior que 50: %d\n", j);
    printf("Media das alturas de pessoas com idade de 10 a 20 anos: %.2lf\n", media_altura);
    printf("Pessoas com peso inferior a 40 quilos: %.2lf por cento\n", peso_inferior);

    return 0;
}