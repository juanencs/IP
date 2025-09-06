/**
 * @file ex8.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Receber a altura e o sexo de uma pessoa, calcule e imprima o seu peso ideal, usando as seguintes
fórmulas:
- homens: (72.7 * altura) - 58
- mulheres: (62.1 * altura) - 44.7
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h> 

int main() {

    double altura, peso_ideal;
    char sexo;

    printf ("Insira sua altura: ");
    scanf ("%lf", &altura);
    printf ("Insira o seu sexo (M ou F): ");
    scanf (" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7*altura - 58;
        printf ("\nSeu peso ideal é: %.2lf\n", peso_ideal);
        
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = 62.1*altura - 44.7;
        printf ("\nSeu peso ideal é: %.2lf\n", peso_ideal);
    }

    return 0;
}