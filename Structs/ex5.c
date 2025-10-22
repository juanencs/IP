/**
 * @file ex5.c
 * @author Juan Enrico (juanenricocs@outlook.com)
 * @brief Crie um registro para representar um produto que possua nome, código, preço e categoria. Crie
um vetor com N produtos e solicite ao usuário para preencher os dados. Em seguida, desenvolva um
menu que permita ao usuário exibir todos os produtos de uma mesma categoria; todos os produtos
com preço inferior a um valor informado; todos os produtos com preço superior a um valor informado.
Não é necessário criar a opção de escolha para inserir mais produtos.
 * @version 0.1
 * @date 2025-10-17
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <string.h>

typedef struct Produto {
    char nome[100];
    char codigo[100];
    double preco;
    int categoria;
} Produto;

int main() {

    int quant, i, op;

    printf ("Insira a quantidade de produtos para registrar: ");
    scanf ("%d", &quant);

    Produto registro[quant];

    for (i = 0; i < quant; i++) {
        printf ("\nProduto (%d):\n", i+1);
        while(getchar() != '\n');

        printf ("Nome: ");
        scanf ("%99[^\n]", registro[i].nome);
        while(getchar() != '\n');

        printf ("Codigo: ");
        scanf ("%99[^\n]", registro[i].codigo);
        while(getchar() != '\n');

        printf ("Preco: ");
        scanf ("%lf", &registro[i].preco);
        
        printf ("===CATEGORIAS===:\n");
        printf ("1- Roupas\n");
        printf ("2- Calcados\n");
        printf ("3- Cama, mesa e banho\n");
        printf ("4- Moveis\n");
        printf ("5- Eletrodomesticos\n");
        scanf ("%d", &registro[i].categoria);
    
    }  

    do {
        printf("\n=== MENU DE CONSULTA ===\n");
        printf("Quais produtos gostaria de ver?\n");
        printf("1- Produtos da mesma categoria.\n");
        printf("2- Produtos com preco abaixo do valor informado.\n");
        printf("3- Produtos com preco acima do valor informado.\n");
        printf("0- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        
        if (op == 0) {
            break;
        }
        
        switch(op) {
        
        case 1: {
            int catEscolhida;
            printf("\nDigite o numero da categoria desejada (1-5): ");
            scanf("%d", &catEscolhida);
            
            printf("\n=== Produtos da categoria %d ===\n", catEscolhida);
            int count = 0;
            for (i = 0; i < quant; i++) {
                if (registro[i].categoria == catEscolhida) {
                    printf("\nNome: %s\n", registro[i].nome);
                    printf("Codigo: %s\n", registro[i].codigo);
                    printf("Preco: R$ %.2lf\n", registro[i].preco);
                    printf("Categoria: %d\n", registro[i].categoria);
                    count = 1;
                }
            }
            if (!count) {
                printf("Nenhum produto encontrado nesta categoria.\n");
            }
            break;
        }
        
        case 2: {
            double valorMax;
            printf("\nDigite o valor maximo: R$ ");
            scanf("%lf", &valorMax);
            
            printf("\n=== Produtos com preco abaixo de R$ %.2lf ===\n", valorMax);
            int count = 0;
            for (i = 0; i < quant; i++) {
                if (registro[i].preco < valorMax) {
                    printf("\nNome: %s\n", registro[i].nome);
                    printf("Codigo: %s\n", registro[i].codigo);
                    printf("Preco: R$ %.2lf\n", registro[i].preco);
                    printf("Categoria: %d\n", registro[i].categoria);
                    count = 1;
                }
            }
            if (!count) {
                printf("Nenhum produto encontrado abaixo deste valor.\n");
            }
            break;
        }
        
        case 3: {
            double valorMin;
            printf("\nDigite o valor minimo: R$ ");
            scanf("%lf", &valorMin);
            
            printf("\n=== Produtos com preco acima de R$ %.2lf ===\n", valorMin);
            int count = 0;
            for (i = 0; i < quant; i++) {
                if (registro[i].preco > valorMin) {
                    printf("\nNome: %s\n", registro[i].nome);
                    printf("Codigo: %s\n", registro[i].codigo);
                    printf("Preco: R$ %.2lf\n", registro[i].preco);
                    printf("Categoria: %d\n", registro[i].categoria);
                    count = 1;
                }
            }
            if (!count) {
                printf("Nenhum produto encontrado acima deste valor.\n");
            }
            break;
        }
        
        default:
            printf("\nOpcao invalida!\n");
            break;
        }
    } while (op != 0);

    return 0;
}