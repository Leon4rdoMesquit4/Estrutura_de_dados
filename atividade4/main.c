#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimir_array(int array[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[]){

    int arrayInteiros[argc - 1];
    
    for (int i = 1; i < argc; i++){
        arrayInteiros[i - 1] = atoi(argv[i]);
    }

    bubble_sort(arrayInteiros, argc - 1);

    imprimir_array(arrayInteiros, argc - 1);

    exit(0);
}
