/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief O programa recebe o salario de dois funcionarios, Carlos e Joao, que farão uma
 * aplicação do seu salario integralmente na poupaça, rendendo a 2% e 5% ao mês 
 * respectivamente. Sabe-se que Joao recebe 1 terço do salario de Carlos. O programa deve
 * calcular a quantidade de meses necessários para que o investimento de Joao se iguale 
 * ou ultrapasse o de Carlos. 
 * @version 0.1
 * @date 2025-09-09
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double sal_Carlos, sal_Joao;
    int i;

    printf ("Insira o salario de Carlos: ");
    scanf ("%lf", &sal_Carlos);

    sal_Joao = sal_Carlos / 3;
    for (i = 0; sal_Joao < sal_Carlos; i++) {
        sal_Carlos += (sal_Carlos*0.02);
        sal_Joao += (sal_Joao*0.05);
    }

    printf ("\nO investimento de Joao levou %d meses para ultrapassar o de Carlos.\n", i);

    return 0;
}