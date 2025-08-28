#include <stdio.h>

int main() {

    int quant_frangos;
    double gasto;
    
    printf ("Insira a quantidade de frangos da granja: ");
    scanf ("%d", &quant_frangos);

    gasto = quant_frangos * 7.5;

    printf ("\nO gasto total da granja é de: R$ %.2lf\n", gasto);

    return 0;
}