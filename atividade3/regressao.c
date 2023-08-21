#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    char *S[50];
    char *ptr;

    FILE *fptr;

    fptr = fopen("dados.csv", "r");

    printf("%s", fptr);

    return 0;
}