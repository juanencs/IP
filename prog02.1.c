#include <stdio.h>

int main() {
    
    int idade, categoria;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 6) {
        categoria = 1;  
    } else if (idade < 18) {
        categoria = 2;  
    } else if (idade < 60) {
        categoria = 3;  
    } else {
        categoria = 4;  
    }

    switch (categoria) {
        case 1:
            printf("Nao paga passagem (crianca).\n");
            break;
        case 2:
            printf("Paga meia passagem (estudante).\n");
            break;
        case 3:
            printf("Paga passagem inteira.\n");
            break;
        case 4:
            printf("Nao paga passagem (idoso).\n");
            break;
        default:
            printf("Categoria invalida.\n");
            break;
    }

    return 0;
}