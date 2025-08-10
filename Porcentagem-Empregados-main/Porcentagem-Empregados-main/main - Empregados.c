#include <stdio.h>
#include <stdlib.h>

int main() {
    int empregados = 0, desempregados = 0;
    int status;
    int habitantes = 10;

    for (int i = 0; i < habitantes; i++) {
        printf("Habitante %d - Está empregado? (1 para Sim, 0 para Não): ", i + 1);
        scanf("%d", &status);

        // Validar entrada
        if (status == 1) {
            empregados++;
        } else if (status == 0) {
            desempregados++;
        } else {
            printf("Entrada inválida. Insira 1 para Sim ou 0 para Não.\n");
            i--; // Voltar para repetir o input para o mesmo habitante
        }
    }

    // Calcular porcentagens
    float porcentagemEmpregados = ((float)empregados / habitantes) * 100;
    float porcentagemDesempregados = ((float)desempregados / habitantes) * 100;

    // Exibir resultados
    printf("\nTotal de empregados: %d (%.2f%%)\n", empregados, porcentagemEmpregados);
    printf("Total de desempregados: %d (%.2f%%)\n", desempregados, porcentagemDesempregados);

    return 0;
}
