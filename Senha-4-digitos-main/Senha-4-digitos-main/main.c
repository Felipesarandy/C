//Enumerar e exibir na tela todas as sugestões de senhas numéricas
//de 4 dígitos com a seguinte "criptografia fraca":
//
//-> ÍMPARES e (AND) MÚLTIPLAS DE 39.
//
//VALOR INICIAL.           : START : 1000
//VALOR FINAL              : STOP  : 9999

#include <stdio.h>
#include <math.h>

int main(void) {
  int contador, enumerar = 0;

  for (contador = 1000; contador <= 9999; contador++) {
    // Verifica se o número é ímpar e múltiplo de 39
    if (contador % 2 != 0 && contador % 39 == 0) {
      // Incrementa o contador de números válidos
      enumerar++;
      // Exibe o número e sua posição na enumeração
      printf("%d. Senha: %d\n", enumerar, contador);
    }
  }

  return 0;
}
