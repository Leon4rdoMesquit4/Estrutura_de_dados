#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(int argc, char* argv[]){

    FILE *file;
    file = fopen("1kk_rand_float.csv", "r");

    if (file == NULL){
        printf("Erro de leitura do arquivo");
        exit(1);
    }

    No* naoOrdenada = NULL;
    No* ordenada = NULL;

    int tamanho = 1001;
    float numbers;
    int i = 0;
    while(fscanf(file, "%f\n", &numbers) == 1 && i < tamanho){
        i++;
    }

    fclose(file);

    exit(0);
}