#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "estoque.c"

int main(){
    int option = 0;
    int qtdProdutos = 0;
    Produto produto[100];

    while(option != 5){
    printf("\n");
    printf("1 - Adicionar produto\n");
    printf("2 - Listar produtos\n");
    printf("3 - Editar produtos\n");
    printf("4 - Remover produto\n");
    printf("5 - Encerrar sistema\n");
    printf("Insira o numero, a seguir: ");
    scanf("%d", &option);
    system("cls");
    
    switch (option){
        case 1:
            adicionar_produto(produto, qtdProdutos);
            qtdProdutos++;
            break;
        case 2:
            listar_produto(produto, qtdProdutos);
            break;
        case 3:
            editar_produto(produto, qtdProdutos);
            system("cls");
            break;
    }
    
    }

    exit(0);
}

