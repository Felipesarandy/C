#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

  int N1, N2;
  printf("Primeiro número inteiro\n");
  scanf("%i", &N1);
  printf("Segundo número inteiro\n");
  scanf("%i", &N2);

  printf("Soma: N1 + N2 = %i + %i = %i\n", N1, N2, N1 + N2);
  printf("Subtração: N1 - N2 = %i - %i = %i\n", N1, N2, N1 - N2);
  printf("Multiplicação: N1 * N2 = %i * %i = %i\n", N1, N2, N1 * N2);
  printf("Divisão: N1 / N2 = %i / %i = %.1f\n", N1, N2, (float) N1 / N2);
  printf("Divisão Inteira: N1 div N2 = %i / %i = %i\n", N1, N2, N1 / N2);
  printf("Resto Inteira: N1 mod N2 = %i %% %i = %i\n", N1, N2, N1 % N2);
  return 0;
}