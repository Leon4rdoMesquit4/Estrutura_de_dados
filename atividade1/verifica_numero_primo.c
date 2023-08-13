#include <stdio.h>
#include <stdlib.h>

void isPrimeNumber(int number){
    int isFinded = 0;
    if (number < 2){
        printf("0");
    } else{
        for (int i = 2; i < number; i++){
            int resultOfDivider = number % i;
            if (resultOfDivider == 0){
                printf("0");
                isFinded++;
                break;
            }
        }

        if(isFinded == 0){
            printf("1");
        }
    }
     
};

int main(int argc, char *argv[]){
    for (int i = 1; i <argc; i++){
        int a = atoi(argv[i]);
        if (a){
            // printf("Number %d: ", a);
            isPrimeNumber(a);
            printf("\n");
        } else {
            printf("Error, something is wrong in position %d ", i);
        }
    }
};