#include <stdio.h>

void imprimirMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizSimetrica(int matriz[][100], int filas, int columnas) {
    int simetrica = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                simetrica = 0;
                break;
            }
        }
        if (simetrica == 0) {
            break;
        }
    }
    
    if (simetrica == 1) {
        printf("¡La matriz es simétrica!\n");
    } else {
        printf("La matriz no es simétrica.\n");
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
    
    // Imprimir la matriz simétrica
    printf("La matriz simétrica es: \n");
    imprimirMatrizSimetrica(matriz, filas, columnas);
    
    return 0;
}