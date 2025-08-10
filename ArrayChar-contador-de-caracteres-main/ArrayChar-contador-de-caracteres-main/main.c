#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

int main()
{
    char MSG[TAMANHO];
    int T;
    while(1){
        printf("Mensagem: ");
        scanf("\n%[^\n]", MSG);
        T = strlen(MSG);
        printf("Tamanho da mensagem: %s -> %i CARACTERES\n", MSG, T);

        if (T < 2) break;
    }
    return 0;
}
