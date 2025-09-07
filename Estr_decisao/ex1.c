/**
 * @file ex1.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Ler 3 coeficientes (valores reais A, B e C) e calcular as ra�zes reais (se existirem) da equa��o
do segundo grau. O programa deve apresentar:
- as duas ra�zes, se para os valores informados for poss�vel fazer o c�lculo (delta positivo ou zero);
- a mensagem ?N�o h� ra�zes reais?, caso delta seja negativo e
- a mensagem ?N�o � equa��o do segundo grau?, se o valor de A for igual a zero.
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
        printf ("\nN�o � uma equa��o do segundo grau\n");
    } else if (delta <= 0) {
        printf ("\nN�o h� ra�zes reais.\n");
    } else if (delta >= 0) {
        printf ("\nValor de x': %.2lf\n", raiz1);
        printf ("\nValor de x'': %.2lf\n", raiz2);
    }

    return 0;
}