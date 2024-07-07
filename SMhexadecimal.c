#include <stdio.h>

void sumarMatrices(int matriz1[][100], int matriz2[][100], int filas, int columnas) {
    int resultado[100][100];
    int esCuadrada = 1;

    // Sumar las matrices
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    // Verificar si la matriz es cuadrada
    if (filas != columnas) {
        esCuadrada = 0;
    }

    // Mostrar el resultado en hexadecimal
    printf("La suma de las matrices es:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%X ", resultado[i][j]);
        }
        printf("\n");
    }

    // Mostrar mensaje si la matriz es cuadrada
    if (esCuadrada) {
        printf("La matriz es cuadrada.\n");
    } else {
        printf("La matriz no es cuadrada.\n");
    }
}

int main() {
    int filas, columnas;
    int matriz1[100][100], matriz2[100][100];

    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la primera matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Ingrese los elementos de la segunda matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

    sumarMatrices(matriz1, matriz2, filas, columnas);

    return 0;
}

