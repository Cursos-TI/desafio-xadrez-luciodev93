#include <stdio.h>

int main() {
    // Nível Novato - Movimentação das Peças
    
    int bispo = 0; //variável para o posicionamento inicial do bispo
    int rainha = 0; //variável para o posicionamento inicial da rainha
    
    // Implementação de Movimentação do Bispo

    // Continua o loop enquanto a variável bispo for menor que 5
    while (bispo < 5) {
      printf("Bispo: cima, direita\n");
      bispo++; //contador para movimentar 1 casa
    }
    
  printf("**\n");
    
    // Implementação de Movimentação da Torre
    for (int torre = 0; torre < 5; torre++) { //contador para movimentar 1 casa
      printf("Torre: direita\n");
    }
  
  printf("**\n");

    // Implementação de Movimentação da Rainha
    do {
      printf("Rainha: esquerda\n");
      rainha++; //contador para movimentar 1 casa
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
