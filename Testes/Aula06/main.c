#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char *argv[]){

    Objeto o1;
    Objeto o2;
    o1.valor = 'A';
    o2.valor = 'B';

    Pilha* p = pilha();
    empilhar(&o1, p);
    empilhar(&o1, p);
    
    desempilhar(p);
    desempilhar(p);

    exit(0);
}