#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void restarMatrices(int matriz1[FILAS][COLUMNAS], int matriz2[FILAS][COLUMNAS], int resultado[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            resultado[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

int main() {
    int matriz1[FILAS][COLUMNAS];
    int matriz2[FILAS][COLUMNAS];
    int resultado[FILAS][COLUMNAS];
    
    // Ingresa los valores de la primera matriz
    printf("Ingrese los valores de la primera matriz %dx%d:\n", FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    // Ingresa los valores de la segunda matriz
    printf("Ingrese los valores de la segunda matriz %dx%d:\n", FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    // Calcula la resta de las matrices
    restarMatrices(matriz1, matriz2, resultado);
    
    // Imprime la matriz resultado
    printf("La resta de las matrices es:\n");
    imprimirMatriz(resultado);
    
    return 0;
}
