#ifndef ESTOQUE_H
#define ESTOQUE_H

//ESTRUTURA DOS PRODUTOS
typedef struct{
    char nome[30];
    char categoria[20];
    char codigo[20];
    int quant;
    float preco; 
} Jogo;

//REGISTROS PARA MOVIMENTACAO
typedef struct {
    char data[11];
    char codigo_produto[20];               
    int quantidade;          
    int tipo; 
} Movimentacao;

typedef struct estoque {
    Jogo *jogos;                    
    Movimentacao *movimentacoes;          
    int num_produtos;                     
    int num_movimentacoes;                
    int capacidade_produtos;              
    int capacidade_movimentacoes;         
} Estoque;

Estoque* criaEstoque();
void liberaEstoque(Estoque *estoque);
void cadastraProduto(Estoque **estoque);
void produtoPorCodigo(Estoque *estoque);
void registraMovimentacao(Estoque *estoque, int tipo);
void geraRelatorios(Estoque *estoque);

#endif