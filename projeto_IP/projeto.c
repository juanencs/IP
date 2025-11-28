#include <stdio.h>
#include <stdlib.h>

typedef struct Jogo {
    char nome[30];
    int codigo;
    int quant;
    int categoria;
    double preco;
} jogo;

void exibirJogo(jogo j) {

    printf("Nome: %s]n", j.nome);
    printf("Código: %d\n", j.codigo);
    printf("Quantidade: %d\n", j.quant); 
    printf("Categoria: %s", j.categoria);
    printf("Preço: %.2f\n", j.preco);
}

void RelatorioGeral(jogo *estoque, int numJogos) {
    
    printf("\n===== RELATORIO GERAL =====\n");
    
    for (int i = 0; i < numJogos; i++) {
        exibirJogo(estoque[i]);
        printf("---------------------------\n");
    }
}

void RelatorioCategoria(jogo *estoque, int numJogos, int categoria){
    
    int qt_1 = 0, qt_2 = 0, qt_3 = 0, qt_4 = 0, qt_5 = 0;

    printf("\n==== RELATORIO DE CATEGORIAS ====\n");
    for (int i = 0; i < numJogos; i++){

        if (estoque[i].categoria == 1){
            qt_1++;
        } else if (estoque[i].categoria == 2){
            qt_2++;
        } else if (estoque[i].categoria == 3){
            qt_3++;
        } else if (estoque[i].categoria == 4){
            qt_4++;
        } else if (estoque[i].categoria == 5){
            qt_5++;
        }

        printf("Quantidade de jogos de ação: %d", qt_1);
        printf("Quantidade de jogos de critatividade: %d", qt_2);
        printf("Quantidade de jogos de FPS: %d", qt_3);
        printf("Quantidade de jogos de Terror: %d", qt_4);
        printf("Quantidade de jogos de Outra categoria: %d", qt_5);
    }
}

int main () {
    
    int quant, i, op;

    printf ("Insira a quantidade de produtos para registrar: ");
    scanf ("%d", &quant);

    jogo registro[quant];

    for (i = 0; i < quant; i++) {
        printf ("\nProduto (%d):\n", i+1);
        getchar();

        printf ("Nome: ");
        scanf ("%29[^\n]", registro[i].nome);
        getchar();

        printf ("Codigo: ");
        scanf ("%d", &registro[i].codigo);

        printf ("Quantidade: ");
        scanf ("%d", &registro[i].quant);

        printf ("Preço: ");
        scanf ("%lf", &registro[i].preco);
        
        printf ("===CATEGORIAS===:\n");
        printf ("1- Ação\n");
        printf ("2- Criatividade\n");
        printf ("3- FPS\n");
        printf ("4- Terror\n");
        printf ("5- Outra\n");
        scanf ("%d", &registro[i].categoria);
    }

    /*do {
        printf("\n=== MENU DE RELATÓRIO ===\n");
        printf("1- Produtos da mesma categoria.\n");
        printf("2- Produtos com mesma.\n");
        printf("3- Produtos com preco abaixo do valor informado.\n");
        printf("3- Produtos com preco acima do valor informado.\n");
        printf("0- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        
        if (op == 0) {
            break;
        }
        
        switch(op) {
        
        case 1: {
            int cat_escolhida;
            printf("\nDigite o numero da categoria desejada (1-5): ");
            scanf("%d", &cat_escolhida);
            
            printf("\n=== Produtos da categoria %d ===\n", cat_escolhida);
            int count = 0;
            for (i = 0; i < quant; i++) {
                if (registro[i].categoria == cat_escolhida) {
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
    } while (op != 0);*/
    
    return 0;
}