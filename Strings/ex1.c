/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Sabendo que a funcao strcmp compara duas strings s1 e s2 (se as duas forem identicas, a
funcao retorna zero). Elabore um programa que peça ao usuario uma senha e compare-a com
sua senha previamente definida para verificar se a senha digitada eh valida ou nao, ou seja, se a
senha digitada confere com a senha pre-estabelecida.
 * @version 0.1
 * @date 2025-10-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>
#define TAM 10000

int main() {

    char senha1[TAM], senha2[TAM];

    printf ("Insira a senha: ");
    fgets (senha1, TAM, stdin);
    senha1[strcspn(senha1, "\n")] = '\0';
    
    printf ("Confirmar senha: ");
    fgets (senha2, TAM, stdin);
    senha2[strcspn(senha2, "\n")] = '\0';

    if (strcmp(senha1, senha2) == 0) {
        printf ("\nSenha valida!\n");
    } else {
        printf ("\nSenha invalida!\n");
    }
    
    return 0;
}