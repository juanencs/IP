#include <stdio.h>

int main() {

    int um_real, cinq_cent, vintcinco_cent, dez_cent, cinco_cent;
    double val_total;

    printf ("Insira a quantidade de moedas de R$ 1,00: ");
    scanf ("%d", &um_real);

    printf ("Insira a quantidade de moedas de R$ 0,50: ");
    scanf ("%d", &cinq_cent);

    printf ("Insira a quantidade de moedas de R$ 0,25: ");
    scanf ("%d", &vintcinco_cent);

    printf ("Insira a quantidade de moedas de R$ 0,10: ");
    scanf ("%d", &dez_cent);

    printf ("Insira a quantidade de moedas de R$ 0,05: ");
    scanf ("%d", &cinco_cent);

    val_total = um_real + (cinq_cent*0.5) + (vintcinco_cent*0.25) + (dez_cent*0.1) + (cinco_cent*0.05);

    printf ("\nO valor total economizado, em reais, é: R$ %.2lf\n", val_total);

    return 0;
}