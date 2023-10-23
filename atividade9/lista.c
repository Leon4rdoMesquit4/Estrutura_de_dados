#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(float valor, No* proximo_no) {
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void lista_inserir_no(No* L, No* no) {
    if(L != NULL) {
        if(L->proximo_no == NULL) {
            L->proximo_no = no;
        } 
        else {
            lista_inserir_no(L->proximo_no, no);
        }
    }
}

void lista_imprimir(No* L) {
    No* atual = L;
    while(atual != NULL){
        printf("%.2f\n", atual->valor);
        atual = atual->proximo_no;
    }
}

int lista_quantidade_nos(No* L) {
    if(L != NULL){
        return 1 + lista_quantidade_nos(L->proximo_no);
    }
    return 0;
}

void lista_liberar(No* L) {
    if(L != NULL){
        lista_liberar(L->proximo_no);
        free(L);
    }
}

void lista_inserir_no_ordenado(No** L, No* no) {
    if(*L == NULL || ((*L)->valor >= no->valor)) {
        no->proximo_no = *L;
        *L = no;
    } else {
        No* atual = *L;
        while(atual->proximo_no != NULL && atual->proximo_no->valor < no->valor){
            atual = atual->proximo_no;
        }

    no->proximo_no = atual->proximo_no;
    atual->proximo_no = no;
    }

}