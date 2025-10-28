/*Uma empresa precisa de um sistema eficiente de controle de estoque para registrar as informações de
seus produtos. Por constar habilidades de desenvolvimento em C em seu currículo, você foi
contratado(a) para desenvolver a solução. Crie um algoritmo em C que registre os produtos da
empresa.*/
#include <stdio.h>
#include <string.h>
#define TAM 3

typedef struct controle_estoque {
    char nome[100];
    int codigo;
    int quant_estoque;
    double preco;
} controle_estoque;

int main() {

    int i, op, temp;
    char nome[100];

    controle_estoque produto[TAM];

    printf ("Insira as informações dos produtos:\n");

    for (i = 0; i < TAM; i++) {
        printf ("\nNome: ");
        scanf ("%99[^\n]", produto[i].nome);
        getchar();

        printf ("Codigo: ");
        scanf ("%d", &produto[i].codigo);

        printf ("Quantidade em estoque: ");
        scanf ("%d", &produto[i].quant_estoque);

        printf ("Preco: ");
        scanf ("%lf", &produto[i].preco);
        getchar();
    }

    printf ("\nEstoque cheio!\n");

    printf ("\n=============================================================\n");
    printf ("Digite a opcao desejada:\n\n");
    printf ("1- Listar os produtos cadastrados.\n");
    printf ("2- Imprimir informações de um produto baseado em seu nome.\n");
    scanf ("%d", &op);
    printf ("=============================================================\n");
    
    if (op == 1) {
        printf ("\nPRODUTOS LISTADOS:\n");
        for (i = 0; i < TAM; i++) {
            printf ("\nNome: %s\n", produto[i].nome);
            printf ("Codigo: %d\n", produto[i].codigo);
            printf ("Quantidade em estoque: %d\n", produto[i].quant_estoque);
            printf ("Preco: R$ %.2lf\n", produto[i].preco);
        }
    }
    if (op == 2) {
        printf ("\nInsira o nome do produto desejado: ");
        scanf (" %99[^\n]", nome);
        getchar();

        temp = -1;
        for (i = 0; i < TAM; i++) {    
            if (strcmp (nome, produto[i].nome) == 0) {  
                temp = i;
                break;
            }
        }    
                        
        if (temp != -1) {
            printf ("\nINFORMACOES DO PRODUTO\n\n");
            printf ("Nome: %s\n", produto[i].nome);
            printf ("Codigo: %d\n", produto[i].codigo);
            printf ("Quantidade em estoque: %d\n", produto[i].quant_estoque);
            printf ("Preco: R$ %.2lf\n", produto[i].preco);
        } else {
            printf ("\nO nome inserido eh invalido!\n");
            return 1;
        }
        
    }
    
    return 0;
}