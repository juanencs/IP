#include <stdio.h>

int main() {

    double comprimento, largura, altura, volume;

    printf ("== Insira as medidas da caixa d�gua ==\n");

    printf ("Comprimento (m): ");
    scanf ("%lf", &comprimento);

    printf ("Largura (m): ");
    scanf ("%lf", &largura);

    printf ("Altura (m): ");
    scanf ("%lf", &altura);

    volume = comprimento * largura * altura;

    printf ("O volume de �gua que pode ser armazenado � de: %.2lf m�.\n", volume);

    return 0;
}
