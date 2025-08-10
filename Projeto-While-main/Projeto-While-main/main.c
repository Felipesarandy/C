#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos = 0;
    float nota, soma = 0, media;
    while(alunos < 50){
        printf("Nota [0, 10] - Aluno %i: ", alunos + 1);
        scanf("%f", &nota);

        if(nota < 0 || nota > 10)
            printf("E R R O R: Dados incorretos.\n");
        else{

            soma = soma + nota;
            alunos = alunos + 1;
        }
    }
    media = soma / alunos;
    printf("Media da turma: %.1f\n", media);
    return 0;
}
