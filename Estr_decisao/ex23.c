/**
 * @file ex22.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Escreva um algoritmo que receba o código correspondente ao cargo de um
funcionario e imprima seu cargo e o percentual de aumento ao qual este funcionário
tem direito seguindo as regras a seguir:
1- Escrituario (50%); 2- Secretario (35%); 3- Caixa (20%); 4- Gerente (10%); 5- Diretor (sem aumento).
 * @version 0.1
 * @date 2025-09-05
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int codigo_funcionario;

    printf ("Informe o código do cargo: ");
    scanf ("%d", &codigo_funcionario);

    switch (codigo_funcionario)
    {
    case 1:
        printf ("\nCargo: Escrituário. Aumento: 50 por cento\n");
        break;
    case 2:
        printf ("\nCargo: Secretário. Aumento: 35 por cento\n");
        break;
    case 3:
        printf ("\nCargo: Caixa. Aumento: 20 por cento\n");
        break;
    case 4:
        printf ("\nCargo: Gerente. Aumento: 10 por cento\n");
        break;
    case 5:
        printf ("\nCargo: Diretor. Nâo tem aumento.\n");
        break;
    default:
        printf ("\nCÓDIGO INVÁLIDO!\n");
        break;
    }

    return 0;
}