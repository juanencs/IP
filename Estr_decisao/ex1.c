/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Ler 3 coeficientes (valores reais A, B e C) e calcular as raí­zes reais (se existirem) da equação
do segundo grau. O programa deve apresentar:
- as duas raí­zes, se para os valores informados for possí­vel fazer o cálculo (delta positivo ou zero);
- a mensagem ?Não há raízes reais?, caso delta seja negativo e
- a mensagem ?Não é equação do segundo grau?, se o valor de A for igual a zero.
 * @version 0.1
 * @date 2025-09-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    double a, b, c, delta, raiz1, raiz2;
    
    printf ("Insira o valor de A: ");
    scanf ("%lf", &a);  
    printf ("Insira o valor de B: ");
    scanf ("%lf", &b);
    printf ("Insira o valor de C: ");
    scanf ("%lf", &c);

    delta = b*b - 4 * a * c;
    raiz1 = b + sqrt(delta) / (2*a);
    raiz2 = b - sqrt(delta) / (2*a);

    if (a == 0) {
        printf ("\nNão é uma equação do segundo grau\n");
    } else if (delta <= 0) {
        printf ("\nNão há raízes reais.\n");
    } else if (delta >= 0) {
        printf ("\nValor de x': %.2lf\n", raiz1);
        printf ("\nValor de x'': %.2lf\n", raiz2);
    }

    return 0;
}