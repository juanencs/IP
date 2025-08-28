#include <stdio.h>

int main() {

    double eco_maria, eco_jose, percento_maria, percento_jose, soma;

    printf ("Insira o valor da economia de Maria: ");
    scanf ("%lf", &eco_maria);

    printf ("Insira o valor da economia de José: ");
    scanf ("%lf", &eco_jose);

    soma = eco_maria + eco_jose;
    percento_maria = eco_maria * 100 / soma;
    percento_jose = eco_jose * 100 / soma;

    printf ("\nPorcentagem de Maria: %.2lf por cento\n", percento_maria);
    printf ("Porcentagem de José: %.2lf por cento\n", percento_jose);

    return 0;
}