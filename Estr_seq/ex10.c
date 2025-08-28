#include <stdio.h>

int main() {

    double celsius, farenheit;

    printf ("Insira a temperatura em Farenheit: ");
    scanf ("%lf", &farenheit);

    celsius = 5/9.0 * (farenheit - 32);

    printf ("\nValor da temperatura em Celsius: %.2lf\n", celsius);

    return 0;
}