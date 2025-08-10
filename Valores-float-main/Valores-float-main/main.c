#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 100
#define MAX 999
#define intervalo ((MAX - MIN + 1) + MIN) / 10.0
#define tam 10

int main()
{
    float array[tam];
    int indice;
    srand(time(NULL));
    printf("ELEMENTOS FLOAT ALEATÓRIOS ENTRE INTERVALO: [10.0, 99.9]; \n");
    for(indice = 0; indice < tam; indice++){
        array[indice] = (rand() % intervalo) / 10.0;
        printf("ARRAY[%i]: %.1f\n", indice, array[indice]);
    }
    return 0;
}
