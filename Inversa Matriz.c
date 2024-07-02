#include <stdio.h>

void imprimirMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizInversa(int matriz[][100], int filas, int columnas) {
    for (int i = filas - 1; i >= 0; i--) {
        for (int j = columnas - 1; j >= 0; j--) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int filas, columnas;
    
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    
    int matriz[100][100];
    
    // Ingresar los valores en la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Verificar si la matriz es cuadrada
    if (filas == columnas) {
        printf("¡La matriz es cuadrada!\n");
    }
    
    // Imprimir la matriz inversa
    printf("La matriz inversa es: \n");
    imprimirMatrizInversa(matriz, filas, columnas);
    
    return 0;
}