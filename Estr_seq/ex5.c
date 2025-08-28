#include <stdio.h>

int main () {

    double x, fx;

    printf ("Insira o valor de x: ");
    scanf ("%lf", &x);

    fx = 2*x + 4;

    printf ("\nValor de x: %lf\n", x);
    printf ("Valor de f(x): %lf\n", fx);

    return 0;
}