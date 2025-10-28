/**
 * @file ex3.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Considere a seguinte declaração: int var, *ptr1, **ptr2, ***ptr3. Escreva um programa que leia a
variável var e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros
ptr1, ptr2 e ptr3. O ponteiro ptr1 deve ser usado para calcular o dobro, ptr2, o triplo, e ptr4, o
quádruplo.
 * @version 0.1
 * @date 2025-10-27
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    int var, *ptr1, **ptr2, ***ptr3;

    printf ("Insira o valor de 'var': ");
    scanf ("%d", &var);

    ptr1 = &var;
    ptr2 = &ptr1;
    ptr3 = &ptr2;

    printf ("\nDobro: %d\n", (*ptr1) * 2);
    printf ("Triplo: %d\n", (**ptr2) * 3);
    printf ("Quádruplo: %d\n", (***ptr3) * 4);

    return 0;
}