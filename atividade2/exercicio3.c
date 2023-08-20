/*
Exercício 3 - Verificar se um elemento existe no array Escreva uma função que recebe um array de strings e 
uma string de busca, e retorna "1" se a string de busca existe no array, ou "0" caso não exista.

Exemplo: busca_string(["texto", "J", "EDA"], "EDO")
Saída: 0 
*/

#include <stdio.h>
#include <string.h>
#define TAM 3

void busca_string(char array[TAM][10], char string[10]){

    for(int i = 0; i<TAM; i++){
        if (strcmp(array[i], string) == 0){
            printf("1");
            return;
        } 
    }
    
    printf("0");
}

int main(void){
    char array[TAM][10] = {"texto", "J", "EDA"};
    char string[10] = "EDO";

    busca_string(array, string);

    return 0;
}