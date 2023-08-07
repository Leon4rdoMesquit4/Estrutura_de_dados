#include <stdio.h>

void isPrimeNumber(int number){
    int isFinded = 0;

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
};

int main(){
    int pop = 7;
    isPrimeNumber(pop);
};
