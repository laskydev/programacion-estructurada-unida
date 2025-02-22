# Cálculo de la Media de un Conjunto de Datos en C

Este programa en C permite calcular la media aritmética de un conjunto de valores ingresados por el usuario. Solicita la cantidad de datos, los valores y luego realiza el cálculo de la media.

## Código en C

```c
#include<stdio.h>

int main() {
	int i;
	int media;
	int num;
	int puntos[20];
	int suma;
	/* Declaración de i */
	printf("numero de datos\n");
	scanf("%i", &num);
	suma = 0;
	/* Corrección de la asignación */
	printf("datos del vector\n");
	for (i=1; i<=num; ++i) {
		/* Corrección del bucle Para */
		scanf("%i", &puntos[i]);
		suma = suma+puntos[i];
	}
	media = suma/num;
	printf("la media es %i\n", media);
	return 0;
}
```

## Pseudocódigo

```plaintext
Algoritmo recorrer_vector
	Definir PUNTOS Como Entero;
	Definir num Como Entero;
	Definir i Como Entero; // Declaraci�n de i
	Dimension PUNTOS[20];
	Definir suma Como Entero;
	Definir media Como Entero;
	
	
	Escribir "numero de datos";
	Leer num;
	
	suma <- 0; // Correcci�n de la asignaci�n
	Escribir "datos del vector";
	
	Para i <- 1 Hasta num Hacer // Correcci�n del bucle Para
		Leer PUNTOS[i];
		suma <- suma + PUNTOS[i];
	FinPara
	
	media <- suma / num;
	Escribir "la media es ", media;
	
FinAlgoritmo
```

## Ejemplo de ejecución en Bash

```bash
$ gcc media.c -o media
$ ./media
numero de datos
5
datos del vector
10
20
30
40
50
la media es 30
```

## Imágenes del Programa

![Captura de ejecución](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/02-segundo-programa/segundo.png)

![Diagrama de flujo](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/02-segundo-programa/segundo-diagrama.png)

---
### Información Adicional
Este programa fue desarrollado para la clase de Programación Estructurada del Dr. Wong en la carrera de Ingeniería en Sistemas Computacionales.
