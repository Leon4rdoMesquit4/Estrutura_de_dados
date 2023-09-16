#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bubble_sort.h"

void ordernarArrayPalavras(char string[][100], int n){
    int i = 0;

    for (int i = 0; i < n; i++){
        printf("%s | ",string[i]);
    }

     printf("\n");

    char ant[100];

    while(i < n){

        for(int j = 0; j < (n - 1 - i); j++){

            if (strcmp(string[j], string[j + 1]) > 0){
                strcpy(ant, string[j]);
                strcpy(string[j], string[j + 1]);
                strcpy(string[j+1], ant);
            };

        }

        i++;
    }

    FILE *ptr;

    ptr = fopen("arq_palavras_ordenado.txt", "w");

    if (ptr == NULL){
        printf("Erro na criacao do arquivo");
        exit(1);
    }

    for (int i  = 0; i < n; i++){
        if (strcmp(string[i], "") != 0){
            fputs(string[i], ptr);
            if (!(i == n-1)){
                fputs("\n", ptr);
            }
            
        }
        
    }

    fclose(ptr);

    for (int i = 0; i < n; i++){
        printf("%s | ",string[i]);
    }
}

// void swap(int* n1, int* n2){
//     int tmp = *n1;
//     *n1 = *n2;
//     *n2 = tmp;
// }

// void bubble_sort(int array[], int n){
//     int i = 0;
//     while(i < n){

//         for (int j = 0; j < (n - 1 - i); j++){
//             int ant = 0;
            
//             if(array[j] > array[j + 1]){
//                 swap(&array[j], &array[j + 1]);
//             }
//         }

//         i++;
//     }
    
// }