#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100 // MAX: ESTÁTICA

void funcao(char palavra[TAMANHO], int *min, int *mai, int *demais);

void funcao(char palavra[TAMANHO], int *min, int *mai, int *demais)
{
    int i = 0;
    *min = 0; *mai = 0; *demais = 0;
    while(palavra[i] != '\0')
    {
        if(palavra[i] >= 'a' && palavra[i] <= 'z')
            *min = (*min) + 1;
        else if(palavra[i] >= 'A' && palavra[i] <= 'Z')
            *mai = (*mai) + 1;
        else
            *demais = (*demais) + 1;
        i++;
    }
}
int main()
{
    char palavra[TAMANHO];
    int min, mai, demais;

    printf("PALAVRA: ");
    scanf("\n%[^\n]", &palavra);

    funcao(palavra, &min, &mai, &demais);

    printf("PALAVRA: %s TEM: \n", palavra);
    printf("MINUSCULAS: %i\n", min);
    printf("MAIUSCULAS: %i\n", mai);
    printf("DEMAIS: %i\n", demais);

    return 0;
}
