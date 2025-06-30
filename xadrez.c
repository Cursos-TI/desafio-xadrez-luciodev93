#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 0;
    int rainha = 0;
    
    // Implementação de Movimentação do Bispo
    while (bispo <= 5) {
      printf("Bispo: cima, direita\n");
      bispo++;
    }
    
  printf("**\n");
    
    // Implementação de Movimentação da Torre
    for (int torre = 0; torre < 5; torre++) {
      printf("Torre: direita\n");
    }
  
  printf("**\n");

    // Implementação de Movimentação da Rainha
    do {
      printf("Rainha: esquerda\n");
      rainha++;
    } while (rainha < 8);
    
  printf("**\n");
  printf("**Fim dos movimentos**\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
