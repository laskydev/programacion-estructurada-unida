# Registro de Nombres de Autos en C

Este programa en C permite al usuario ingresar nombres de automóviles y almacenarlos en un arreglo. Posteriormente, se imprimen los nombres ingresados.

## Código en C

```c
#include<stdio.h>

#define MAX_STRLEN 256

int main() {
	char autos[MAX_STRLEN][10];
	int i;
	char palabra[MAX_STRLEN][16];
	printf("Universidad Internacional de América\n");
	printf("Ingeniería en Sistemas Computacionales\n");
	printf("Segundo Cuatrimestre\n");
	printf("Alumno: Javier Eduardo Fortuna Gonzalez\n");
	printf("Ingresa los nombres de los autos\n");
	for (i=1; i<=9; ++i) {
		scanf("%s", autos[i]);
	}
	printf("Los autos que introduciste al arreglo son:\n");
	for (i=1; i<=9; ++i) {
		printf("%s\n", autos[i]);
	}
	return 0;
}
```

## Pseudocódigo

```plaintext
Algoritmo coches
	Definir palabra Como Caracter;
	Dimension palabra[16];
	Definir autos Como Caracter;
	Definir i Como Entero;
	Dimension autos[10];
	
	Escribir "Universidad Internacional de Am�rica";
	Escribir "Ingenier�a en Sistemas Computacionales";
	Escribir "Segundo Cuatrimestre";
	Escribir "Alumno: Javier Eduardo Fortuna Gonzalez";
	Escribir "Ingresa los nombres de los autos";
	
	Para i=1 Hasta 9 Hacer
		Leer autos[i];
	FinPara
	
	Escribir "Los autos que introduciste al arreglo son:";
	
	Para i=1 Hasta 9 Con Paso 1 Hacer
		Escribir autos[i];
	FinPara
FinAlgoritmo
```

## Ejemplo de ejecución en Bash

```bash
$ gcc autos.c -o autos
$ ./autos
Universidad Internacional de América
Ingeniería en Sistemas Computacionales
Segundo Cuatrimestre
Alumno: Javier Eduardo Fortuna Gonzalez
Ingresa los nombres de los autos
Toyota
Honda
Ford
BMW
Audi
Nissan
Mazda
Chevrolet
Volkswagen
Los autos que introduciste al arreglo son:
Toyota
Honda
Ford
BMW
Audi
Nissan
Mazda
Chevrolet
Volkswagen
```

## Imágenes del Programa

![Captura de ejecución](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/03-tercer-programa/tercero-diagrama.png)

![Diagrama de flujo](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/03-tercer-programa/tercero.png)

---
### Información Adicional
Este programa fue desarrollado para la clase de Programación Estructurada del Dr. Wong en la carrera de Ingeniería en Sistemas Computacionales.
