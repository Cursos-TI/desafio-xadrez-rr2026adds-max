#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Quantidade de casas que cada peça irá se mover
    int Bispo = 2;
    int Torre = 5;
    int Rainha = 8;
    int Cavalo = 3;
    char baixo, esquerda, direita;

    // Implementação de Movimentação do Bispo  
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo se move:\n");
    for (int i = 1; i <= Bispo; i++) {
        printf("casas na Diagonal superior direita (%d)\n", i);
    }

    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre se move:\n");
    for (int i = 1; i <= Torre; i++) {
        printf("casas a Direita (%d)\n", i);
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Rainha se move:\n");
    for (int i = 1; i <= Rainha; i++) {
        printf("casas a Esquerda (%d)\n", i);
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    printf("Cavalo se move:\n");
    for (int i = 1; i <= 2; i++) {
        printf("Casas a Baixo (%d)", i);
        for (int j = 1; j <= i; j++) {
            printf("%c", Cavalo);
            ++Cavalo;
        }
        printf("\n");

            while (i <= 1) {
            printf("Casa a esquerda (%d)\n", i);
            i++;
            
            }
            printf("\n");
    }
    
    // Um loop pode representar a movimentação horizontal e outro vertical.
    return 0;
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

   

