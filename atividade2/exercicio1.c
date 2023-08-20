/*
Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array de números inteiros e 
retorna a soma de todos os elementos;


Exemplo: soma_array([5, 7, 9,6])
Saída: 27 
*/

#include <stdio.h>
#define TAM 4

int soma_array(int array[TAM]){
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        soma += array[i];
    }

    printf("%d", soma);
}

int main(void){

    int array[] = {5, 7, 9, 6};
    soma_array(array);

    return 0;
}