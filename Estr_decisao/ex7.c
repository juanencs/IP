/**
 * @file ex7.c
 * @author Juan Enrico (juanenrico@outlook.com)
 * @brief Uma empresa resolve dar um aumento de 30% aos funcionários que recebem um salário inferior
a R$ 1.200,00. Implemente um programa que receba como dado de entrada o salário de um
funcionário e imprima o valor do salário reajustado, caso o funcionário tenha direito ao aumento.
Se o funcionário não tiver direito ao aumento, informe isso por meio de uma mensagem.
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double sal, sal_aumento;

    printf ("Insira o salário do funcionário: ");
    scanf ("%lf", &sal);

    sal_aumento = sal + sal*0.3;

    if (sal >= 1200) {
        printf ("\nO funcionário não tem direito ao aumento.\n");
    } else if (sal < 1200) {
        printf ("\nSalário reajustado: %.2lf\n", sal_aumento);
    }

    return 0;
}