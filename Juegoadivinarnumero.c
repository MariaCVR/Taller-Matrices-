#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, intento, adivinanza;

    // Generar un número aleatorio entre 1 y 100
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("Bienvenido a Adivina el número!\n");
    printf("Estoy pensando en un número entre 1 y 100.\n");

    // Ciclo para permitir múltiples intentos
    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &adivinanza);

        if (adivinanza > numeroSecreto) {
            printf("Demasiado alto. ¡Inténtalo de nuevo!\n");
        } else if (adivinanza < numeroSecreto) {
            printf("Demasiado bajo. ¡Inténtalo de nuevo!\n");
        } else {
            printf("¡Felicidades! ¡Has adivinado el número secreto!\n");
        }
    } while (adivinanza != numeroSecreto);

    return 0;
}
