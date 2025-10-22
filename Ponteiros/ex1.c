/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2025-10-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main() {

    int var = 20; 
    int *ptr = &var;
    int **ptrPtr = &ptr;

    printf ("Valor de var: %d\n", var); 
    printf ("Valor de *ptr: %d\n", *ptr);
    printf ("Valor de ptrPtr: %d\n", **ptrPtr);

    return 0;
}