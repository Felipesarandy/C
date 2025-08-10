#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100 // ESTÁTICA +GOLBAL (escopo)

void funcao(char *MSG, char *INV);

void funcao(char *MSG, char *INV)
{
    int j = 0, i = strlen(MSG) - 1;
    while( i >= 0)
    {
        INV[j] = MSG[i]; // palavra nova
        j++;
        i--;
    }
    INV[j] = '\0'; // fechar palavra nova
}

int main()
{
    char MSG[TAMANHO], INV[TAMANHO];

    printf("MSG: ");
    scanf("\n%[^\n]", MSG);

    funcao(MSG, INV);

    printf("ORIGINAL: %s\n", MSG);
    printf("INVERSO: %s\n", INV);

    return 0;
}
