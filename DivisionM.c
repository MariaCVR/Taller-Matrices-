#include <stdio.h>

void dividirMatrices(float matriz1[][100], float matriz2[][100], int filas, int columnas) {
    float resultado[100][100];
    int esCuadrada = 1;

    // Verificar si la matriz es cuadrada
    if (filas != columnas) {
        esCuadrada = 0;
    } else {
        // Dividir las matrices
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                if (matriz2[i][j] != 0) {
                    resultado[i][j] = matriz1[i][j] / matriz2[i][j];
                } else {
                    // Manejar la división por cero
                    printf("Error: No se puede dividir por cero.\n");
                    return;
                }
            }
        }
    }

    // Mostrar el resultado
    printf("El resultado de la división de las matrices es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%.2f ", resultado[i][j]);
        }
        printf("\n");
    }

    // Mostrar mensaje si la matriz es cuadrada
    if (esCuadrada) {
        printf("La matriz es cuadrada.\n");
    }
}

int main() {
    int filas, columnas;
    float matriz1[100][100], matriz2[100][100];

    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%f", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%f", &matriz2[i][j]);
        }
    }

    dividirMatrices(matriz1, matriz2, filas, columnas);

    return 0;
}

