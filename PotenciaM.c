#include <stdio.h>

void potenciaMatriz(float matriz[][100], int filas, int columnas, int exponente) {
    float resultado[100][100];
    int esCuadrada = 1;

    // Verificar si la matriz es cuadrada
    if (filas != columnas) {
        esCuadrada = 0;
    } else {
        // Calcular la potencia de la matriz
        for (int i = 0; i < filas; i++) {
            for (int j = 0; j < columnas; j++) {
                resultado[i][j] = matriz[i][j];
            }
        }
        
        for (int k = 1; k < exponente; k++) {
            float temp[100][100];
            for (int i = 0; i < filas; i++) {
                for (int j = 0; j < columnas; j++) {
                    temp[i][j] = resultado[i][j];
                }
            }
            
            for (int i = 0; i < filas; i++) {
                for (int j = 0; j < columnas; j++) {
                    resultado[i][j] = 0;
                    for (int x = 0; x < columnas; x++) {
                        resultado[i][j] += temp[i][x] * matriz[x][j];
                    }
                }
            }
        }
    }

    // Mostrar el resultado
    printf("El resultado de la potencia de la matriz es:\n");
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
    int filas, columnas, exponente;
    float matriz[100][100];

    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            scanf("%f", &matriz[i][j]);
        }
    }

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    potenciaMatriz(matriz, filas, columnas, exponente);

    return 0;
}
