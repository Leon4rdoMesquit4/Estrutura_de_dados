#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double doubleNumber(double d){
    return d * (2.0);
}

void printString(char* string){
    for(int n = 0; n < strlen(string); n++){
        printf("%c", string[n]);
    }
}

int main(int argc, char* argv[]){
    int i = 11;
    float f = 11.5;
    double d = 11.555555;
    char c = 'c';
    char* string = "nao existe string em c"; 
    double array_i[] = {2, 34, 6};

    printf("\n%c - %s. %d", c, string, strlen(string));

    printf("\n");
    printString(string);
    printf("\n%f * 2 = %f", d, doubleNumber(d));

    for(int n = 0; n < (sizeof(array_i) / sizeof(double)); n++){
        printf("\n%f", array_i[n]);
    }

    return 0;
}