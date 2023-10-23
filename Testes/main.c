#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct No {
    float valor;
    struct No* proximo_no;
} No;

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
    No *aux = (No *)malloc(sizeof(No));

    if (*L == NULL) {
        no->proximo_no = NULL;
        *L = no;
    } else if (no->valor < (*L)->valor){
        no->proximo_no = *L;
        *L = no;
    } else {
        aux = *L;
        while(aux->proximo_no && no->valor > aux->proximo_no->valor){
            aux = aux->proximo_no;
        }
        no->proximo_no = aux->proximo_no;
        aux->proximo_no = no;

    }
}

int main(int argc, char const *argv[])
{
    No *cabeca = NULL;
    No *teste = (No *)malloc(sizeof(No));
    teste->valor = 9;

    No *teste2 = (No *)malloc(sizeof(No));
    teste2->valor = 10;

    No *teste3 = (No *)malloc(sizeof(No));
    teste3->valor = 1;

    lista_inserir_no_ordenado(&cabeca, teste);
    lista_inserir_no_ordenado(&cabeca, teste2);
    lista_inserir_no_ordenado(&cabeca, teste3);

    lista_imprimir(cabeca);

    lista_liberar(cabeca);

    return 0;
}
