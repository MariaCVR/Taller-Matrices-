#include <stdio.h>

int main() {
    int numeros[4][13];
    int i, j, temp;

    printf("Ingresa 52 números del 1 al 13 desordenados:\n");

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            scanf("%d", &numeros[i][j]);
        }
    }

    // Ordenar los números 
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 13; j++) {
            for (int k = j + 1; k < 13; k++) {
                if (numeros[i][j] > numeros[i][k]) {
                    temp = numeros[i][j];
                    numeros[i][j] = numeros[i][k];
                    numeros[i][k] = temp;
                }
            }
        }
    }

    printf("\nLos números ingresados ordenados por las distintas cartas de la baraja son:\n");

    // Imprimir corazón rojo
    printf("Corazón Rojo: ");
    for (j = 0; j < 13; j++) {
        // Reemplazar el número 1 con la letra A
        if (numeros[0][j] == 1) {
            printf("A ");
        }
        // Reemplazar el número 11 con la letra J
        else if (numeros[0][j] == 11) {
            printf("J ");
        }
        // Reemplazar el número 12 con la letra Q
        else if (numeros[0][j] == 12) {
            printf("Q ");
        }
        // Reemplazar el número 13 con la letra K
        else if (numeros[0][j] == 13) {
            printf("K ");
        }
        else {
            printf("%d ", numeros[0][j]);
        }
    }
    printf("\n");

    // Imprimir diamante
    printf("Diamante: ");
    for (j = 0; j < 13; j++) {
        // Reemplazar el número 1 con la letra A
        if (numeros[1][j] == 1) {
            printf("A ");
        }
        // Reemplazar el número 11 con la letra J
        else if (numeros[1][j] == 11) {
            printf("J ");
        }
        // Reemplazar el número 12 con la letra Q
        else if (numeros[1][j] == 12) {
            printf("Q ");
        }
        // Reemplazar el número 13 con la letra K
        else if (numeros[1][j] == 13) {
            printf("K ");
        }
        else {
            printf("%d ", numeros[1][j]);
        }
    }
    printf("\n");

    // Imprimir trébol
    printf("Trébol: ");
    for (j = 0; j < 13; j++) {
        // Reemplazar el número 1 con la letra A
        if (numeros[2][j] == 1) {
            printf("A ");
        }
        // Reemplazar el número 11 con la letra J
        else if (numeros[2][j] == 11) {
            printf("J ");
        }
        // Reemplazar el número 12 con la letra Q
        else if (numeros[2][j] == 12) {
            printf("Q ");
        }
        // Reemplazar el número 13 con la letra K
        else if (numeros[2][j] == 13) {
            printf("K ");
        }
        else {
            printf("%d ", numeros[2][j]);
        }
    }
    printf("\n");

    // Imprimir corazón negro
    printf("Corazón Negro: ");
    for (j = 0; j < 13; j++) {
        // Reemplazar el número 1 con la letra A
        if (numeros[3][j] == 1) {
            printf("A ");
        }
        // Reemplazar el número 11 con la letra J
        else if (numeros[3][j] == 11) {
            printf("J ");
        }
        // Reemplazar el número 12 con la letra Q
        else if (numeros[3][j] == 12) {
            printf("Q ");
        }
        // Reemplazar el número 13 con la letra K
        else if (numeros[3][j] == 13) {
            printf("K ");
        }
        else {
            printf("%d ", numeros[3][j]);
        }
    }
    printf("\n");

    return 0;
}
