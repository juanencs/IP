#include <stdio.h> 
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    double sal_min, sal_fun, quant;
    
    printf ("Insira o valor do salário mínimo: ");
    scanf ("%lf", &sal_min);

    printf ("Insira o valor do salário do funcionário: ");
    scanf ("%lf", &sal_fun);

    quant = sal_fun / sal_min;

    printf ("\nValor do salário do funcionário: %.2lf\n", sal_fun);
    printf ("Valor do salário mínimo: %.2lf\n", sal_min);
    printf ("Quantidade de salários mínimos que o funcionário recebe: %.2lf\n", quant);

    return 0;
}