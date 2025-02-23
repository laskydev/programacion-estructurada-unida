# Implementación de una Cola en C

Este programa en C implementa una cola simple utilizando un arreglo. Se incluyen funciones para encolar, desencolar y recorrer la cola, además de verificar si está vacía o llena.

## Código en C

```c
#include <stdio.h>
#include <stdbool.h>

#define QUEUE_MAX 100

// Función para encolar un elemento
typedef struct {
    int primero;
    int ultimo;
    int n;
    float queue[QUEUE_MAX];
} Cola;

void encolar(float dato, Cola *cola) {
    if (!colallena(cola)) {
        if (cola->ultimo == 0) {
            cola->ultimo = 1;
            cola->primero = 1;
        } else {
            cola->ultimo = cola->ultimo + 1;
        }
        cola->queue[cola->ultimo - 1] = dato;
    } else {
        printf("La cola esta llena\n");
    }
}

// Función para desencolar un elemento
float desencolar(Cola *cola) {
    float ret = 0;
    if (!colavacia(cola)) {
        ret = cola->queue[cola->primero - 1];
        if (cola->primero == cola->ultimo) {
            cola->primero = 0;
            cola->ultimo = 0;
        } else {
            cola->primero = cola->primero + 1;
        }
    } else {
        printf("La cola esta vacia\n");
    }
    return ret;
}

// Función para recorrer la cola
void recorrercola(Cola *cola) {
    Cola temp = *cola;
    while (!colavacia(&temp)) {
        printf("%d\n", (int)desencolar(&temp));
    }
}

bool colavacia(Cola *cola) {
    return cola->ultimo == 0;
}

bool colallena(Cola *cola) {
    return cola->ultimo == cola->n;
}

int main() {
    Cola cola = {0, 0, 3, {0}};
    float vec[3] = {3, 5, 66};

    // Encolar elementos
    encolar(vec[0], &cola);
    encolar(vec[1], &cola);
    encolar(vec[2], &cola);

    printf("Datos encolados de vector a cola:\n");
    recorrercola(&cola);
    return 0;
}
```

## Pseudocódigo

```plaintext
Funcion Encolar(dato, primero Por Referencia, ultimo Por Referencia, u, queue)
	si((no(colaLlena(ultimo, n)))) Entonces
		si (ultimo = 0) Entonces
			
			ultimo <- 1;
			primero <- 1;
		SiNo
			ultimo = ultimo + 1;
		FinSi
		queue(ultimo) <- dato;
		
	SiNo
		Escribir "La cola esta llena";
	FinSi
FinFuncion

Funcion ret <- Desencolar(primero Por Referencia, ultimo Por Referencia, queue)
	si(no(colaVacia(ultimo))) Entonces
		ret <- queue[primero];
		si (primero = ultimo) Entonces
			primero <- 0;
		SiNo si (primero = n) Entonces
				primero <- 0;
			SiNo
				primero = primero + 1;
			FinSi
		FinSi
		
	SiNo
		Escribir "La cola esta vacia";
		ret <- 0;
	FinSi
FinFuncion

Funcion recorrerCola(primero, ultimo, queue)
	Mientras (No(colaVacia(ultimo))) Hacer
		Escribir Desencolar(primero, ultimo, queue);
	FinMientras
FinFuncion

Funcion tp <- colaVacia(ultimo)
	tp <- (ultimo = 0);
FinFuncion

Funcion tp <- colaLLena(ultimo,n)
	tp <- (ultimo = n);
FinFuncion

Proceso DeVectorACola

	
	n <- 3;
	primero <- 0;
	ultimo <- 0;
	Dimension queue[n];
	Dimension  vec[3];
	vec[1] <- 3;
	vec[2] <- 5;
	vec[3] <- 66;
	
	Encolar(vec[1], primero, ultimo, n, queue);
	Encolar(vec[2], primero, ultimo, n, queue);
	Encolar(vec[3], primero, ultimo, n, queue);
	
	Escribir "Datos encolados de vector a cola";
	
	Para i <- 1 Hasta n Con Paso 1 Hacer
		Escribir queue[i];
	FinPara
	
FinProceso

```

## Ejemplo de ejecución en Bash

```bash
$ gcc cola.c -o cola
$ ./cola
Datos encolados de vector a cola:
3
5
66
```

## Imágenes del Programa

![Captura de ejecución](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/06-de-vector-a-queue/sexto.png)

![Diagrama de flujo](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/06-de-vector-a-queue/sexto-diagrama.png)

---
### Información Adicional
Este programa fue desarrollado para la clase de Programación Estructurada del Dr. Wong en la carrera de Ingeniería en Sistemas Computacionales.
