#include <stdio.h>

int main() {

    double sal_min, quant_kW, val_kW, val_pago;

    printf ("Insira o valor do salário mínimo: ");
    scanf ("%lf", &sal_min);

    printf ("Insira a quantidade de quilowatts consumida: ");
    scanf ("%lf", &quant_kW);

    val_kW = sal_min / 5.0;
    val_pago = quant_kW * val_kW;

    printf ("\nValor em reais de cada quilowatt: R$ %.2lf\n", val_kW);
    printf ("Valor em reais a ser pago pela residência: R$ %.2lf\n", val_pago);
    printf ("Valor em reais a ser pago com desconto de 15 por cento: R$ %.2lf\n", val_pago - (val_pago * 15/100.0));

    return 0;
}