#include <stdio.h> 

int main() {

    double n1, n2, media; 

    printf ("Insira a nota do primeiro semestre: ");
    scanf ("%lf", &n1);

    printf ("Insira a nota do segundo semestre: ");
    scanf ("%lf", &n2);

    media = (n1*4 + n2*6) / 10.0;

    printf ("\nMédia semestral: %.2lf\n", media);

    return 0;
}