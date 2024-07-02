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
    
    // Mostrar los elementos que no están en las esquinas de la matriz
    printf("Los elementos que no están en las esquinas de la matriz son: \n");
    for (int i = 1; i < filas - 1; i++) {
        for (int j = 1; j < columnas - 1; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}
