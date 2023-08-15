/*
Exercício 5 - Multiplicar elementos de dois arrays. Escreva uma função que recebe dois arrays de números
inteiros com o mesmo tamanho e retorna um novo array com os elementos resultantes da multiplicação dos 
elementos dos dois arrays.

Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
Saída: [25, 49, 81, 36] 
*/

#include <stdio.h>
#define TAM 4

int* multiplica_array(int array[TAM], int array2[TAM]){
    int array3[TAM] = {0, 0, 0, 0};
    printf("[");
    for (int i = 0; i < TAM; i++){
        array3[i] = array[i] * array2[i];
        printf("%d ", array3[i]);
    }
    printf("]");
    
}

int main(void){
    int array[TAM] = {5, 7, 9, 6}; 
    int array2[TAM] = {5, 7, 9,6};

    multiplica_array(array, array2);
}