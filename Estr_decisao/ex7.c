/**
 * @file ex7.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Uma empresa resolve dar um aumento de 30% aos funcion�rios que recebem um sal�rio inferior
a R$ 1.200,00. Implemente um programa que receba como dado de entrada o sal�rio de um
funcion�rio e imprima o valor do sal�rio reajustado, caso o funcion�rio tenha direito ao aumento.
Se o funcion�rio n�o tiver direito ao aumento, informe isso por meio de uma mensagem.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double sal, sal_aumento;

    printf ("Insira o sal�rio do funcion�rio: ");
    scanf ("%lf", &sal);

    sal_aumento = sal + sal*0.3;

    if (sal >= 1200) {
        printf ("\nO funcion�rio n�o tem direito ao aumento.\n");
    } else if (sal < 1200) {
        printf ("\nSal�rio reajustado: %.2lf\n", sal_aumento);
    }

    return 0;
}