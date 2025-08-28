#include <stdio.h> 

int main() {

    double sal, reajuste, novo_sal;

    printf ("Insira o valor do salário mensal do funcionário: ");
    scanf ("%lf", &sal);

    printf ("Insira o percentual do reajuste salarial: ");
    scanf ("%lf", &reajuste);

    novo_sal = sal + (sal * reajuste/100.0);

    printf ("\nO valor do novo salário é: %.2lf\n", novo_sal);

    return 0;
}