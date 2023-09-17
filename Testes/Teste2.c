#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100

int main()
{
    char string[3][n] = {"Bom Dia", "Americanas", "arrumado"};
    char ant[100];
    for (int i = 0; i < 3; i++)
    {
        for (int f = 0; f < 3 - 1 - i; f++)
        {
            for (int g = 0; g < n; g++)
            {
                int a;
                char ac;
                int b;
                char bc;

                if (string[f][g] > 96)
                {
                    a = string[f][g] - 32;
                    ac = string[f][g];
                }
                else
                {
                    a = string[f][g];
                    ac = string[f][g];
                }

                if (string[f + 1][g] > 96)
                {
                    b = string[f + 1][g] - 32;
                    bc = string[f + 1][g];
                }
                else
                {
                    b = string[f + 1][g];
                    bc = string[f + 1][g];
                }
                if(a < b){
                    break;
                }
                if (a > b)
                {
                    strcpy(ant, string[f]);
                    strcpy(string[f], string[f + 1]);
                    strcpy(string[f+1], ant);
                    break;
                }
                else if (a == 0 || b == 0)
                {
                    break;
                }

                printf("%c: %d, %c: %d\n", ac, a, bc, b);
            }
            printf("\n\n");
        }
    }

    printf("%s, %s, %s", string[0], string[1], string[2]);

    return 0;
}

// char ch = 'C';
// char ch2 = 'b';
// printf("\nDigite um caracter: ");
// scanf("%c",&ch);
// printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);
// if (ch < ch2 - 32){
//     printf("ch: %d ch2: %d", ch, ch2);
// }