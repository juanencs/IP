#include <stdio.h>

int main() {

    double comprimento, largura, altura, volume;

    printf ("== Insira as medidas da caixa dágua ==\n");

    printf ("Comprimento (m): ");
    scanf ("%lf", &comprimento);

    printf ("Largura (m): ");
    scanf ("%lf", &largura);

    printf ("Altura (m): ");
    scanf ("%lf", &altura);

    volume = comprimento * largura * altura;

    printf ("O volume de água que pode ser armazenado é de: %.2lf m³.\n", volume);

    return 0;
}
