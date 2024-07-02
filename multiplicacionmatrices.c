#include <stdio.h>

#define FILAS_MATRIZ1 3
#define COLUMNAS_MATRIZ1 2
#define COLUMNAS_MATRIZ2 3

void imprimirMatriz(int matriz[FILAS_MATRIZ1][COLUMNAS_MATRIZ2]) {
    for (int i = 0; i < FILAS_MATRIZ1; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrices(int matriz1[FILAS_MATRIZ1][COLUMNAS_MATRIZ1], int matriz2[COLUMNAS_MATRIZ1][COLUMNAS_MATRIZ2], int resultado[FILAS_MATRIZ1][COLUMNAS_MATRIZ2]) {
    for (int i = 0; i < FILAS_MATRIZ1; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < COLUMNAS_MATRIZ1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

int main() {
    int matriz1[FILAS_MATRIZ1][COLUMNAS_MATRIZ1];
    int matriz2[COLUMNAS_MATRIZ1][COLUMNAS_MATRIZ2];
    int resultado[FILAS_MATRIZ1][COLUMNAS_MATRIZ2];
    
    // Ingresa los valores de la primera matriz
    printf("Ingrese los valores de la primera matriz %dx%d:\n", FILAS_MATRIZ1, COLUMNAS_MATRIZ1);
    for (int i = 0; i < FILAS_MATRIZ1; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ1; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    // Ingresa los valores de la segunda matriz
    printf("Ingrese los valores de la segunda matriz %dx%d:\n", COLUMNAS_MATRIZ1, COLUMNAS_MATRIZ2);
    for (int i = 0; i < COLUMNAS_MATRIZ1; i++) {
        for (int j = 0; j < COLUMNAS_MATRIZ2; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    // Calcula la multiplicación de las matrices
    multiplicarMatrices(matriz1, matriz2, resultado);
    
    // Imprime la matriz resultado
    printf("La multiplicación de las matrices es:\n");
    imprimirMatriz(resultado);
    
    return 0;
}
