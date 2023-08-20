/*
Exercício 2 - Maior e menor elemento do array. Escreva uma função que recebe um array de números inteiros e]
retorna o menor e o maior elemento do array.

Exemplo: menor_maior_array([5, 7, 9,6])
Saída: 5, 9
*/

#include <stdio.h>
#define TAM 4

int menor_maior_array(int array[TAM])
{
    int menorNumero = *array;
    int maiorNumero = *array;
    

    for(int i = 0; i < TAM; i++){
        if (maiorNumero < array[i]) {
            maiorNumero = array[i];
        }
        if (menorNumero > array[i]){
            
            menorNumero = array[i];
        }
    }
    printf("%d, %d", menorNumero, maiorNumero);
}

int main(void)
{
    int array[TAM] = {5,7,9,6};
    menor_maior_array(array);
}