#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

void adicionar_produto(Produto *produto, int qtdProdutos){
    Produto p;
    printf("\n");
    printf("Informe o nome do produto: ");
    scanf("%s", p.nome);
    printf("Informe o id do produto: ");
    scanf("%d", &p.id);
    printf("Informe a quantidade do produto: ");
    scanf("%d", &p.quantidade);

    produto[qtdProdutos] = p;
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