#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "estoque.h"

Estoque* criaEstoque(){
    Estoque *atualizado = (Estoque*)malloc(sizeof(Estoque));
    if (atualizado == NULL) {
        printf("Erro: nao foi possivel criar estoque!\n");
        return NULL;
    }

    atualizado->capacidade_produtos = 10; //capacidade inicial do vetor de produtos(jogos)
    atualizado->capacidade_movimentacoes = 10; //capacidade inicial do vetor de movimentações

    atualizado->jogos = (Jogo*)malloc(atualizado->capacidade_produtos*sizeof(Jogo));
    atualizado->movimentacoes = (Movimentacao*)malloc(atualizado->capacidade_movimentacoes*sizeof(Movimentacao));

    if (atualizado->jogos == NULL || atualizado->movimentacoes == NULL) {
        printf("Erro: falha ao atualizar jogos ou movimentações!\n");
        free(atualizado);
        return NULL;
    }

    atualizado->num_produtos = 0;
    atualizado->num_movimentacoes = 0; 

    return atualizado;
}

void cadastraProduto(Estoque **estoque){
    if (*estoque == NULL){
        *estoque = criaEstoque();
    }

    //Realoca memória de produtos caso não haja suficiente
    if ((*estoque)->num_produtos >= (*estoque)->capacidade_produtos) { 
        (*estoque)->capacidade_produtos *= 2;
        (*estoque)->jogos = (Jogo*)realloc((*estoque)->jogos, (*estoque)->capacidade_produtos * sizeof(Jogo));
        if ((*estoque)->jogos == NULL) {
            printf("Erro: falha ao cadastrar jogos!\n");
            return;
        }
    }

    Jogo *atualizado = &(*estoque)->jogos[(*estoque)->num_produtos];

    printf("\nNome do jogo: ");
    while (getchar() != '\n'); //limpa buffer
    fgets(atualizado->nome, sizeof(atualizado->nome), stdin);
    atualizado->nome[strcspn(atualizado->nome, "\n")] = 0;
    if (strlen(atualizado->nome) == 0) {
        printf("\nNome nao pode ser vazio.\n");
        return;
    }

    printf("Codigo do jogo: ");
    fgets(atualizado->codigo, sizeof(atualizado->codigo), stdin);
    atualizado->codigo[strcspn(atualizado->codigo, "\n")] = 0;
    if (strlen(atualizado->codigo) == 0) {
        printf("\nCodigo nao pode ser vazio.\n");
        return;
    }

    printf("Preco: R$ ");
    if (scanf("%f", &atualizado->preco) != 1) {
        printf("\nErro: Entrada invalida. O preco deve ser numerico.\n");
        while (getchar() != '\n');
        return;
    } else if (atualizado->preco < 0) {
        printf("\nErro: O preco nao pode ser negativo.\n");
        return;
    }

    printf("Categoria: ");
    while (getchar() != '\n');
    fgets(atualizado->categoria, sizeof(atualizado->categoria), stdin);
    atualizado->categoria[strcspn(atualizado->categoria, "\n")] = 0;
    if (strlen(atualizado->categoria) == 0) {
        printf("\nCategoria nao pode ser vazia.\n");
        return;
    }
   
    printf("Quantidade: ");
    scanf("%d", &atualizado->quant);
    if (atualizado->quant <= 0){
        printf("\nQuantidade invalida.\n");
        return;
    }

    printf("\nPRODUTO CADASTRADO COM SUCESSO!\n");

    (*estoque)->num_produtos++;
}

void liberaEstoque(Estoque *estoque){
    if (estoque != NULL){
        if (estoque->jogos != NULL){
            free(estoque->jogos);
        }
        if (estoque->movimentacoes != NULL){
            free(estoque->movimentacoes);
        }
        free(estoque);
    }
}

void produtoPorCodigo(Estoque *estoque){
    
    char cod[20];
    int i;
    int encontrado = 0;
    
    if (estoque == NULL || estoque->num_produtos == 0){
        printf("\nNenhum produto cadastrado.\n");
        return;
    }

    printf("\nDigite o codigo do produto para realizar a busca: ");
    while (getchar() != '\n');
    fgets(cod, sizeof(cod), stdin);
    cod[strcspn(cod, "\n")] = 0;
    if (strlen(cod) == 0) {
        printf("Codigo nao pode ser vazio.\n");
        return;
    }

    for (i = 0; i < estoque->num_produtos; i++){
        if (strcmp(estoque->jogos[i].codigo, cod) == 0){
            Jogo *j = &estoque->jogos[i];

            printf("\n==== INFORMACOES DO PRODUTO ====\n");
            printf("Nome: %s\n", j->nome);
            printf("Codigo: %s\n", j->codigo);
            printf("Categoria: %s\n", j->categoria);
            printf("Preco: R$%.2f\n", j->preco);
            printf("Quantidade: %d\n", j->quant);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("\nProduto nao encontrado.\n");
    }
}

void registraMovimentacao(Estoque *estoque, int tipo){
    
    int quant, i;
    char data[11];
    char cod[20];

    if (estoque == NULL || estoque->num_produtos == 0){
        printf("\nNao ha produtos cadastrados.\n");
        return;
    }

    //Realoca memória de movimentações caso não haja suficiente
    if (estoque->num_movimentacoes >= estoque->capacidade_movimentacoes) {
        estoque->capacidade_movimentacoes *= 2;
        estoque->movimentacoes = (Movimentacao*)realloc(estoque->movimentacoes, estoque->capacidade_movimentacoes * sizeof(Movimentacao));
        if (estoque->movimentacoes == NULL) {
            printf("Erro: falha registrar movimentacoes!\n");
            return;
        }
    }

    printf("\n--- %s NO ESTOQUE ---\n", (tipo == 1) ? "ENTRADA" : "SAIDA"); //
    printf("Digite o codigo do produto: ");
    getchar();
    fgets(cod, sizeof(cod), stdin);
    cod[strcspn(cod, "\n")] = 0;
    if (strlen(cod) == 0) {
        printf("Codigo nao pode ser vazio.\n");
        return;
    }

    int encontrado = 0;
    Jogo *jogo = NULL;

    for (i = 0; i < estoque->num_produtos; i++){
        if (strcmp(estoque->jogos[i].codigo, cod) == 0){
            jogo = &estoque->jogos[i];
            encontrado = 1;
            break;
        }
    }
    if (encontrado == 0){
        printf("Produto nao encontrado.\n");
        return;
    }

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%10s", data);

    printf("Digite a quantidade: ");
    scanf("%d", &quant);

    if (quant < 1){
        printf("\nQuantidade invalida!\n");
        return;
    }
    if (tipo == -1){
        if (quant > jogo->quant){
            printf("\nErro!\n");
            return;
        }
    }

    printf("\nMOVIMENTACAO REGISTRADA!\n");

    Movimentacao *mov = &estoque->movimentacoes[estoque->num_movimentacoes];
    strcpy(mov->codigo_produto, jogo->codigo);
    strcpy(mov->data, data);
    mov->quantidade = quant;
    mov->tipo = (tipo == 1) ? '1' : '2';

    jogo->quant += (tipo ==1) ? quant : -quant;
    estoque ->num_movimentacoes++;
}

int comparaData(const void *a, const void *b) {
    
    int d1, d2, mes1, mes2, ano1, ano2;

    const Movimentacao *mov1 = (const Movimentacao *)a;
    const Movimentacao *mov2 = (const Movimentacao *)b;
    
    sscanf(mov1->data, "%d/%d/%d", &d1, &mes1, &ano1);
    sscanf(mov2->data, "%d/%d/%d", &d2, &mes2, &ano2);

    if (ano1 != ano2) return ano1 - ano2;
    if (mes1 != mes2) return mes1 - mes2;
    return d1 - d2;
}

void geraRelatorios(Estoque *estoque){
    if (estoque == NULL || estoque->num_produtos == 0) {
        printf("\nNenhum produto cadastrado!\n");
        return;
    }

    int opcao;

    printf("\n=== GERAR RELATORIOS ===\n");
    printf ("Digite:\n");
    printf("1) Para relatorio completo de produtos\n");
    printf("2) Para relatorio por categoria\n");
    printf("3) Para historico de movimentacoes\n");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 3) {
        printf("Opcao invalida.\n");
        return;
    }

    switch (opcao){
        case 1: {
            printf("\n|RELATORIO COMPLETO|\n");

            for (int i = 0; i < estoque->num_produtos; i++){
                Jogo *j = &estoque->jogos[i];
                printf("Codigo: %s\n", j->codigo);
                printf("Nome: %s\n", j->nome);
                printf("Categoria: %s\n", j->categoria);
                printf("Preco: R$ %.2f\n", j->preco);
                printf("Quantidade: %d\n", j->quant);
            }
            break;
        }

        case 2: {
            char cat[20];
            int i = 0;
            
            printf("\nDigite a categoria: ");
            getchar();
            fgets(cat, sizeof(cat), stdin);
            cat[strcspn(cat, "\n")] = 0;

            while (cat[i] != '\0') {
                cat[i] = toupper(cat[i]);
                i++;
            }

            int encontrado = 0; //Flag usada para buscar produto pela categoria

            for (int i = 0; i < estoque->num_produtos; i++){
                Jogo *j = &estoque->jogos[i];

                if (strcasecmp(j->categoria, cat) == 0){
                    printf("\nCategoria: %s\n", cat);
                    printf("Codigo: %s\n", j->codigo);
                    printf("Nome: %s\n", j->nome);
                    printf("Preco: R$ %.2f\n", j->preco);
                    printf("Quantidade: %d\n", j->quant);
                    encontrado = 1;
                }
            }

            if (encontrado == 0){
                printf("\nNenhum produto encontrado.\n");
            }
            break;
        }

        case 3: {
            if (estoque->num_movimentacoes == 0){
                printf("\nNao houve nenhuma movimentacao.\n");
                return;
            }

            //ordena as datas de modificações em ordem crescente
            qsort(estoque->movimentacoes, estoque->num_movimentacoes, sizeof(Movimentacao), comparaData);

            for (int i = 0; i < estoque->num_movimentacoes; i++){
                Movimentacao *m = &estoque->movimentacoes[i];
                printf("\nData: %s\n", m->data);
                printf("Codigo: %s\n", m->codigo_produto);
                printf("Tipo de movimentacao: ");
                if (m->tipo == '1') {
                    printf("Entrada\n");
                } else {
                    printf("Saida\n");
                }
                printf("Quantidade: %d\n", m->quantidade);
            }
            break;
        }
        default:
            printf("Opcao invalida.\n");
    }
}