/*
Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. Escreva uma função que recebe um array 
de números inteiros e um número inteiro de busca, e retorna a quantidade de vezes que o número de busca aparece 
no array.

Exemplo: conta_int_array([5, 7, 9, 6, 7, 11, 6, 5], 7)
Saída: 2
*/

#include <stdio.h>
#define TAM 8

int conta_int_array(int array[TAM], int numero){
    int numerosIguais = 0;

    for (int i = 0; i < TAM; i++){
        if (numero == array[i]){
            numerosIguais+=1;
        }
    }

    return numerosIguais;

}

int main(void){
    int number = 7;
    int array[TAM] = {5, 7, 9, 6, 7, 11, 6, 5};

    printf("%d", conta_int_array(array, number));

    return 0;
}