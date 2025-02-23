#include <stdio.h>
#include <stdbool.h>

#define QUEUE_MAX 100

// Function declarations
void encolar(float dato, int *primero, int *ultimo, int n, float queue[]);
float desencolar(int *primero, int *ultimo, float queue[]);
void recorrercola(int primero, int ultimo, float queue[]);
bool colavacia(int ultimo);
bool colallena(int ultimo, int n);

void encolar(float dato, int *primero, int *ultimo, int n, float queue[]) {
    if (!colallena(*ultimo, n)) {
        if (*ultimo == 0) {
            *ultimo = 1;
            *primero = 1;
        } else {
            *ultimo = *ultimo + 1;
        }
        queue[*ultimo - 1] = dato;
    } else {
        printf("La cola esta llena\n");
    }
}

float desencolar(int *primero, int *ultimo, float queue[]) {
    float ret = 0;
    
    if (!colavacia(*ultimo)) {
        ret = queue[*primero - 1];
        if (*primero == *ultimo) {
            *primero = 0;
            *ultimo = 0;  // También reseteamos último
        } else {
            *primero = *primero + 1;
        }
    } else {
        printf("La cola esta vacia\n");
    }
    return ret;
}

void recorrercola(int primero, int ultimo, float queue[]) {
    int temp_primero = primero;
    int temp_ultimo = ultimo;
    
    while (!colavacia(temp_ultimo)) {
        printf("%d\n", (int)desencolar(&temp_primero, &temp_ultimo, queue));
    }
}

bool colavacia(int ultimo) {
    return ultimo == 0;
}

bool colallena(int ultimo, int n) {
    return ultimo == n;
}

int main() {
    int primero = 0;
    int ultimo = 0;
    int n = 3;
    float queue[QUEUE_MAX];
    float vec[3] = {3, 5, 66};

    // Encolar elementos
    encolar(vec[0], &primero, &ultimo, n, queue);
    encolar(vec[1], &primero, &ultimo, n, queue);
    encolar(vec[2], &primero, &ultimo, n, queue);

    printf("Datos encolados de vector a cola:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", (int)queue[i]);  // Convertimos a int al imprimir
    }

    return 0;
}