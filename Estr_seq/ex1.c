#include <stdio.h>

int main() {

    double e_dolar, e_real, cota�ao; 

    printf ("Insira o valor da economia em d�lares: ");
    scanf ("%lf", &e_dolar);

    printf ("Insira o valor da cota��o atual do d�lar em real: ");
    scanf ("%lf", &cota�ao);

    e_real = e_dolar * cota�ao;

    printf ("\nO valor das economias em reais �: R$ %.2lf\n", e_real);

    return 0;
}