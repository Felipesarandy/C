#include <stdio.h>

int main(void) {
  
  float preco, total;
  int quantidade;

  printf("Dados da Mercadoria: \n");
  printf("Preço: R$ "); scanf("%f", &preco);
  printf("Quantidade (Unid.): "); scanf("%i", &quantidade);

  total = preco * quantidade;
  if (total > 1000.00)
    total *= 0.97;

  printf("Total a pagar: R$ %.2f\n", total);
  return 0;
}
