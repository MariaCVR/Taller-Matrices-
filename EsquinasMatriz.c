#include <stdio.h>

int main() {
    int filas, columnas;
    
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    
    int matriz[filas][columnas];
    
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
    
    // Mostrar los 4 elementos de la esquina
    if (filas >= 2 && columnas >= 2) {
        printf("Los 4 elementos de la esquina son: \n");
        printf("Superior izquierda: %d\n", matriz[0][0]);
        printf("Superior derecha: %d\n", matriz[0][columnas - 1]);
        printf("Inferior izquierda: %d\n", matriz[filas - 1][0]);
        printf("Inferior derecha: %d\n", matriz[filas - 1][columnas - 1]);
    }
    
    return 0;
}