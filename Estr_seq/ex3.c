#include <stdio.h> 
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    double sal_min, sal_fun, quant;
    
    printf ("Insira o valor do sal�rio m�nimo: ");
    scanf ("%lf", &sal_min);

    printf ("Insira o valor do sal�rio do funcion�rio: ");
    scanf ("%lf", &sal_fun);

    quant = sal_fun / sal_min;

    printf ("\nValor do sal�rio do funcion�rio: %.2lf\n", sal_fun);
    printf ("Valor do sal�rio m�nimo: %.2lf\n", sal_min);
    printf ("Quantidade de sal�rios m�nimos que o funcion�rio recebe: %.2lf\n", quant);

    return 0;
}