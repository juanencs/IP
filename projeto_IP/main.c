#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int main(){

    Estoque *estoque = NULL; //ponteiro para a estrutura de estoque
    int operacao;
    
    do {
        printf("\n===== SISTEMA ESTOQUE DE JOGOS =====\n");
        printf("Digite:\n");
        printf("1) Para cadastrar novo produto\n");
        printf("2) Para consultar produto atraves do codigo\n");
        printf("3) Registrar entrada no estoque\n");
        printf("4) Registrar saida no estoque\n");
        printf("5) Gerar relatorio\n");
        printf("0) Sair\n");
        scanf("%d", &operacao);

        if (operacao < 0 || operacao > 5){
            printf("Opcao invalida.\n"); 
            while (getchar() != '\n'); // Limpa o buffer do teclado
            continue;
        }

        switch (operacao){
            case 1:
                cadastraProduto(&estoque);
                break;
            case 2:
                produtoPorCodigo(estoque);
                break;
            case 3:
                registraMovimentacao(estoque, 1);
                break;
            case 4:
                registraMovimentacao(estoque, -1); // -1 = saída
                break;
            case 5:
                geraRelatorios(estoque);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (operacao != 0);

    liberaEstoque(estoque);

    return 0;
}
    