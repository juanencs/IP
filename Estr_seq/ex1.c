#include <stdio.h>

int main() {

    double e_dolar, e_real, cotaçao; 

    printf ("Insira o valor da economia em dólares: ");
    scanf ("%lf", &e_dolar);

    printf ("Insira o valor da cotação atual do dólar em real: ");
    scanf ("%lf", &cotaçao);

    e_real = e_dolar * cotaçao;

    printf ("\nO valor das economias em reais é: R$ %.2lf\n", e_real);

    return 0;
}