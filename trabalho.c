#include <stdio.h>

int main () {

    float x, fx;

    printf ("Insira o valor de x: ");
    scanf ("%f", &x);

    fx = 2*x + 4;

    printf ("\nValor de x: %.2f\n", x);
    printf ("Valor de f(x): %.2f\n", fx);

    return 0;
}
