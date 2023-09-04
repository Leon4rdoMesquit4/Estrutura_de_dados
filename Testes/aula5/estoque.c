#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int adicionar_produto(Produto *produto, int qtdProdutos){
    Produto p;
    printf("\n");
    printf("Informe o nome do produto: ");
    scanf("%s", p.nome);
    printf("Informe o id do produto: ");
    scanf("%d", &p.id);
    printf("Informe a quantidade do produto: ");
    scanf("%d", &p.quantidade);

    for(int i = 0; i < qtdProdutos; i++){
        if(p.id == produto[i].id){
            return 0;
        }
    }

    produto[qtdProdutos] = p;
    return 1;
}

void listar_produto(Produto *produto, int qtdProdutos){
    printf("\n");

    for(int i = 0; i < qtdProdutos; i++){
        printf("\n");
        printf("%s, %d, %d", produto[i].nome, produto[i].id, produto[i].quantidade);
    }
}

void editar_produto(Produto *produto, int qtdProdutos){
    int id;
    printf("\nInforme o ID do produto\n");
    scanf("%d", &id);
    for(int i = 0; i < qtdProdutos; i++){
        if(produto[i].id == id){
        printf("Informe a nova quantidade do produto: ");
        scanf("%d", &produto[i].quantidade);
        }
    }
}

int remover_produto(Produto *produto, int qtdProdutos){
    int id;
    int remove = 0;

    listar_produto(produto, qtdProdutos);
    printf("\n");
    printf("Qual o id do elemento que você deseja remover? ");
    scanf("%d", id);

    for(int i = 0; i < qtdProdutos; i++){
        if(produto[i].id == id){
            produto[i] = produto[qtdProdutos - 1];
            remove += 1;
        }
    }

    return remove;
}