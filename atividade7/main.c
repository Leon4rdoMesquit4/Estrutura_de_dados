#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha* pilhaDesfazer = criarPilha();
    Pilha* pilhaRefazer = criarPilha();
    int valorAtual = 0;
    char operacao;

    while (1) {
        printf("Valor atual: %d\n", valorAtual);
        printf("Operação (+, -, *, /, u para desfazer, r para refazer, q para sair): ");
        scanf(" %c", &operacao);

        if (operacao == 'q') {
            break;
        } else if (operacao == 'u') {
            if (!estaVazio(pilhaDesfazer)) {
                empilhar(pilhaRefazer, valorAtual); 
                valorAtual = desempilhar(pilhaDesfazer);
            } else {
                printf("Nada para desfazer.\n");
            }
        } else if (operacao == 'r') {
            if (!estaVazio(pilhaRefazer)) {
                empilhar(pilhaDesfazer, valorAtual); 
                valorAtual = desempilhar(pilhaRefazer);
            } else {
                printf("Nada para refazer.\n");
            }
        } else if (operacao == '+' || operacao == '-' || operacao == '*' || operacao == '/') {
            int operador;
            printf("Digite o operador: ");
            scanf("%d", &operador);

            empilhar(pilhaDesfazer, valorAtual); 
            switch (operacao) {
                case '+':
                    valorAtual += operador;
                    break;
                case '-':
                    valorAtual -= operador;
                    break;
                case '*':
                    valorAtual *= operador;
                    break;
                case '/':
                    if (operador != 0) {
                        valorAtual /= operador;
                    } else {
                        printf("Divisão por zero não é permitida.\n");
                    }
                    break;
            }
            
            // Tira todos os elementos da pilha quando não precisar da pilha de refazer 
            while (!estaVazio(pilhaRefazer)) {
                desempilhar(pilhaRefazer);
            }
        } else {
            printf("Operação inválida.\n");
        }
    }

    free(pilhaDesfazer);
    free(pilhaRefazer);

    return 0;
}