#include <stdio.h>

int main() {

    double tar_agua, tar_esgoto;

    printf ("Insira o valor da tarifa de água: ");
    scanf ("%lf", &tar_agua);

    tar_esgoto = tar_agua - (tar_agua * 0.2);


    printf ("\nValor da conta a ser paga: %.2lf\n", tar_agua + tar_esgoto);

    return 0;
}