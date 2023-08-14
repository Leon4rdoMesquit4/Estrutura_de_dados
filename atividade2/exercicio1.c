#include <stdio.h>

/*
Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array de números inteiros e retorna a soma de todos os elementos;


Exemplo: soma_array([5, 7, 9,6])
Saída: 27 
*/

int soma_array(int* primeiroNumeroDoArray, int tamanho){
    int soma = 0;
    for(int i = 0; i < tamanho; i++){
        soma += primeiroNumeroDoArray[i];
    }

    return soma;
}

int main(int argc, char* argv[]){

    int array[] = {5, 7, 9, 6};
    int tamanho = sizeof(array)/sizeof(int);

    printf("%d", soma_array(array, tamanho));

    return 0;
}