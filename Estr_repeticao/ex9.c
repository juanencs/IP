/**
 * @file ex9.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Faca um programa que receba 2 notas de N alunos. Calcule e mostre:
a) a media aritmetica das 2 notas de cada aluno;
b) uma mensagem de acordo com as regras a seguir:
Media Aritmetica                Mensagem
     Ate 3                      Reprovado
  Entre 3 e 7                    Exame
 De 7 para cima                 Aprovado
c) o total de alunos aprovados;
d) o total de alunos de exame;
e) o total de alunos reprovados;
f) a media da classe.
Assuma que o N informado eh valido, assim como as 2 notas de cada aluno.
 * @version 0.1
 * @date 2025-09-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <locale.h>

int main() {
setlocale (LC_ALL, "Portuguese");

    int N_aluno, aprovado = 0, reprovado = 0, exame = 0, i;
    double nota1, nota2, media_aluno, media_classe = 0; 

    printf ("Insira o numero total de alunos: ");
    scanf ("%d", &N_aluno);

    for (i = 0; i < N_aluno; i++) {
        printf ("\nInsira a primeira nota: ");
        scanf ("%lf", &nota1);
        printf ("Insira a segunda nota: ");
        scanf ("%lf", &nota2);

        media_aluno = (nota1 + nota2) / 2.0;
        printf ("Media: %.2lf\n", media_aluno);

        if (media_aluno <= 3) {
            printf ("REPROVADO!\n");
            reprovado++;
        } else if (media_aluno > 3 && media_aluno < 7) {
            printf ("EXAME!\n");
            exame++;
        } else if (media_aluno >= 7) {
            printf ("APROVADO!\n");
            aprovado++;
        }
        media_classe += media_aluno;
    }
    media_classe = media_classe / N_aluno;
    printf ("\nTotal de alunos aprovados: %d\n", aprovado);
    printf ("Total de alunos de exame: %d\n", exame);
    printf ("Total de alunos reprovados: %d\n", reprovado);
    printf ("Media da classe: %.2lf\n", media_classe);

    return 0;
}