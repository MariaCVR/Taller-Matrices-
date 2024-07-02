#include <stdio.h>

void imprimirFilasColumnas(int matriz[][3], int filas, int columnas) {
    printf("El número de filas es: %d\n", filas);
    printf("El número de columnas es: %d\n", columnas);
}

int main() {
    int matriz[3][3]; // matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // imprimir la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("El elemento [%d][%d] es: %d\n", i, j, matriz[i][j]);
        }
    }

    // Imprimir la diagonal principal
    for (int i = 0; i < 3; i++) {
        printf("El elemento [%d][%d] es: %d\n", i, i, matriz[i][i]);
    }

    // Obtener el número de filas y columnas de la matriz
    int filas = sizeof(matriz) / sizeof(matriz[0]);
    int columnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    // Imprimir el número de filas y columnas de la matriz
    imprimirFilasColumnas(matriz, filas, columnas);

    return 0;
}