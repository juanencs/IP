/**
 * @file ex9.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Uma determinada disciplina de 64 horas calcula a média final do alunos a partir de
 *  3 notas atribuí­das a um trabalho de peso 2, um teste de peso 2 e uma prova de peso 6. As
 * notas variam de 0 a 10 e a média final é calculada pela média ponderada das 3 notas citadas
 * anteriormente. Receba as 3 notas do estudante e o número de faltas, calcule e imprima a 
 * media final e uma mensagem de acordo com a seguinte regra:
- Se o número de faltas for superior a 25% das aulas dadas, REPROVADO POR
FALTA
- Se o número de faltas for inferior ou igual a 25% das aulas dadas e a média final for
igual ou superior a 7,0: ALUNO APROVADO
- Se o número de faltas for inferior ou igual a 25% das aulas dadas e a média final for
inferior a 7,0 mas superior ou igual a 5,0: PROVA FINAL
- Se a média final for inferior a 5,0: ALUNO REPROVADO
 * @version 0.1
 * @date 2025-09-04
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {

    double n_trabalho, n_teste, n_prova, media;
    int faltas;

    printf ("Insira a nota do trabalho: ");
    scanf ("%lf", &n_trabalho);
    printf ("Insira a nota do teste: ");
    scanf ("%lf", &n_teste);
    printf ("Insira a nota da prova: ");
    scanf ("%lf", &n_prova);
    printf ("Insira o número de faltas: ");
    scanf ("%d", &faltas);

    media = (n_trabalho*2 + n_teste*2 + n_prova*6) / 8;

    if (faltas > 16) {
        printf ("\nMédia: %.2lf. REPROVADO POR FALTA!\n", media);
    } else if (faltas <= 16 && media >= 7.0) {
        printf ("\nMédia: %.2lf. ALUNO APROVADO!\n", media);
    } else if (faltas <= 16 && media < 7.0 && media >= 5.0) {
        printf ("\nMédia: %.2lf. PROVA FINAL!\n", media);
    } else if (media < 5.0) {
        printf ("\nMédia: %.2lf. REPROVADO!\n", media);
    }

    return 0;
}