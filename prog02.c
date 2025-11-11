#include <stdio.h>

int main() {
    
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        if (idade < 6) {
            printf("Nao paga passagem (crianca).\n");
        } else {
            printf("Paga meia passagem (estudante).\n");
        }
    } else {
        if (idade < 60) {
            printf("Paga passagem inteira.\n");
        } else {
            printf("Nao paga passagem (idoso).\n");
        }
    }

    return 0;
}