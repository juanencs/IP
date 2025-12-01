# Controle de Estoque de Jogos

## Sobre o projeto 
Este programa em C implementa um sistema de controle de estoque de jogos, utilizando Estrutura sequencial, Estruturas condicionais, Estruturas de repetição, Estruturas de
dados homogêneas (arrays), Estruturas de dados heterogêneas (registros), Ponteiros, Alocação Dinâmica,
Funções e Arquivos. Este está dividido em três arquivos:

- main.c – Menu principal e fluxo geral do programa

- estoque.h – Declarações das estruturas e funções

- estoque.c – Implementação de todas as funcionalidades do estoque

O sistema permite cadastrar jogos, registrar entradas/saídas, consultar produtos e gerar relatórios.

Além do funcionamento básico, este documento inclui um **ROTEIRO DE TESTES COMPLETO** para orientar o usuário no preenchimento, restrições e execução de cenários de teste.


## Estrutura de Dados

### Estrutura Jogo

```bash
typedef struct {
    char nome[30];
    char categoria[20];
    char codigo[20];
    int quant;
    float preco;
} Jogo; 
```

### Estrutura Movimentacao

```bash
typedef struct {
    char data[11];
    char codigo_produto[20];
    int quantidade;
    int tipo;
} Movimentacao;
```


### Estrutura Estoque
```bash
typedef struct estoque {
    Jogo *jogos;
    Movimentacao *movimentacoes;
    int num_produtos;
    int num_movimentacoes;
    int capacidade_produtos;
    int capacidade_movimentacoes;
} Estoque;
```

## Como Compilar e Executar
### Compilação
```bash
gcc main.c estoque.c -o estoque
```

### Execução
```bash
./estoque
```

## 📁 Estrutura do Projeto
```
📂 sistema-controle-estoque-de-jogos
├── apresentacao-problema-estoque.pdf
├── README.md
└── src
    ├── main.c
    ├── estoque.c
    └── estoque.h
```

## Funcionamento Interno do Código

O programa funciona assim:

1. O menu principal aparece na tela  
2. O usuário escolhe uma opção  
3. A função correspondente é chamada  
4. A memória é realocada automaticamente quando necessário  
5. Ao finalizar, a função `liberaEstoque()` libera toda memória alocada  

Principais funções:

- `criaEstoque()`  
- `cadastraProduto()`  
- `produtoPorCodigo()`  
- `registraMovimentacao()`  
- `geraRelatorios()`  
- `liberaEstoque()`  

---

# Roteiro de Teste da Solução

Este roteiro orienta passo a passo como testar o sistema, com instruções sobre o preenchimento correto dos dados e cenários alternativos.

---

# 1. Iniciando o Sistema

### Execução
```bash
./estoque
```

Menu exibido:

```
1) Cadastrar novo produto  
2) Consultar produto por código  
3) Registrar entrada  
4) Registrar saída  
5) Gerar relatório  
0) Sair  
```

---

# 2. Teste de Cadastro de Produto (Opção 1)

### Objetivo  
Verificar se o cadastro de novos jogos funciona corretamente.

### Passos  
1. Digite **1** no menu.
2. Preencha os dados solicitados:

| Campo | Exemplo | Restrições |
|-------|---------|------------|
| Nome | The Witcher 3 | Obrigatório |
| Código | PS5-001 | Strings; não duplicar; obrigatório |
| Preço | 199.90 | Somente números positivos |
| Categoria | RPG | Aceita texto; comparação é case-insensitive |
| Quantidade | 10 | Inteiro > 0 |

### Resultado esperado
- Exibe: *“PRODUTO CADASTRADO COM SUCESSO!”*

### Alternativas e erros comuns
- Quantidade ≤ 0 → “Quantidade inválida”
- Se sobrar lixo no buffer → repetir o cadastro

---

# 3. Teste de Consulta por Código (Opção 2)

### Passos
1. Digite **2**.
2. Informe um código existente, como `PS5-001`.

### Resultado esperado
Mostra:
- Nome  
- Categoria  
- Preço  
- Quantidade  

### Testes alternativos
- Código inexistente → “Produto não encontrado”
  
---

# 4. Teste de Entrada no Estoque (Opção 3)

### Objetivo  
Adicionar unidades ao estoque de um produto.

### Passos
1. Digite **3**.
2. Informe o código cadastrado (ex.: `PS5-001`).
3. Digite a data (`dd/mm/aaaa`), respeitando o modelo com caracteres numéricos separados por barras.
4. Digite a quantidade a adicionar (> 0).

### Resultado esperado
- Exibe: “MOVIMENTAÇÃO REGISTRADA!”
- Quantidade do produto aumenta.

### Restrições
- Data deve ter exatamente 10 caracteres.
- Quantidade deve ser positiva.

---

# 5. Teste de Saída do Estoque (Opção 4)

### Objetivo  
Remover unidades de um produto.

### Passos
1. Digite **4**.
2. Informe o código (ex.: `PS5-001`).
3. Digite a data.
4. Digite a quantidade a remover.

### Restrições
| Situação | Resultado |
|---------|-----------|
| Quantidade ≤ 0 | Rejeitado |
| Quantidade > estoque atual | “Erro!” |

---

# 6. Teste de Relatórios (Opção 5)

Ao escolher **5**, o sistema abre o submenu:

```
1) Relatório completo  
2) Relatório por categoria  
3) Histórico de movimentações  
```

---

## 6.1 Relatório completo (1)
Mostra todos os produtos cadastrados.

Verificar:
- Consistência das quantidades
- Preço e categoria corretos

---

## 6.2 Relatório por categoria (2)
Passos:
1. Digitar **2**
2. Digitar categoria, ex.: `rpg`

O sistema converte para maiúsculas internamente.

Resultado:
- Lista de produtos daquela categoria

Se não existir → “Nenhum produto encontrado.”

---

## 6.3 Histórico de movimentações (3)
Deve exibir:
- Data
- Código do produto
- Tipo (entrada/saída)
- Quantidade

---

# 7. Teste de Encerramento do Programa (Opção 0)

Digite **0** para encerrar.

Resultado esperado:
- Programa libera toda memória
- Finaliza sem erros

---

# 8. Casos de Teste Sugeridos

| Caso | Objetivo |
|------|----------|
| Cadastro duplicado | Testar se o sistema permite códigos repetidos (hoje **permite**) |
| Entrada grande | Verificar overflow lógico |
| Saída com quantidade insuficiente | Deve impedir a operação |
| Categorias variadas | Testar filtro por categoria |
| Relatórios com estoque vazio | Deve exibir mensagens corretas |

---

# Conclusão

Este README reúne:

- Documentação completa do sistema  
- Descrição técnica  
- Estruturas internas  
- Instruções de execução  
- Roteiro de testes detalhado  

---

## Contribuidores
- Juan Enrico Cardoso Soares
- Giovana Fernandes Porto
- Elva Valentina Vecchi

---
