/**
 * @file ex7.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um programa que receba varios numeros, calcule e mostre:
a) a soma dos numeros digitados;
b) a quantidade de numeros digitados;
c) a media dos numeros digitados;
d) o maior numero digitado;
e) o menor numero digitado;
f) a media dos numeros pares;
g) a percentagem dos numeros impares entre todos os numeros digitados.
Finalize a entrada de dados com a digitacao do numero 30.000
 * @version 0.1
 * @date 2025-09-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    
    int num, i = 0;
    double soma_num = 0, maior_num = 0, menor_num = 0, quant_num = 0;
    double media_par, percent_impar, media_num, quant_par = 0, soma_par = 0, quant_impar = 0;

    while (1) {
        printf ("Digite um numero (insira 30000 p/ sair): ");
        scanf ("%d", &num);

        if (num == 30000) {
            break;
        }

        soma_num += num;
        quant_num++;

        if (i == 0) {
            maior_num = num;
            menor_num = num;
        } else {
            if (num > maior_num) {
                maior_num = num;
            }
            if (num < menor_num) {
                menor_num = num; 
            }
            i = 1;
        }
        if (num % 2 == 0) {
            quant_par++;
            soma_par += num;
        }
        if (num % 2 != 0) {
            quant_impar++;
        }
    }
    media_num = soma_num / quant_num;
    media_par = soma_par / quant_par;
    percent_impar = (quant_impar/quant_num) * 100;

    printf ("\nSoma dos numeros digitados: %.2lf\n", soma_num);
    printf ("Quantidade de numeros digitados: %.2lf\n", quant_num);
    printf ("Media dos numeros digitados: %.2lf\n", media_num);
    printf ("Maior numero digitado: %.2lf\n", maior_num);
    printf ("Menor numero digitado: %.2lf\n", menor_num);
    printf ("Media dos numeros pares: %.2lf\n", media_par);
    printf ("Percentagem dos impares entre todos os numeros: %.2lf\n", percent_impar);

    return 0;
}