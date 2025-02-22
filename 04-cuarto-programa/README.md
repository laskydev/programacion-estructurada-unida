# Manejo de Matrices en C

Este programa en C permite al usuario ingresar valores en una matriz de 3x3 y luego la imprime en pantalla. 

## Código en C

```c
#include <stdio.h>

int main()
{
    int arreglo[3][3];
    int columna;
    int fila;
    for (fila = 0; fila <= 2; ++fila)
    {
        for (columna = 0; columna <= 2; ++columna)
        {
            printf("Escriba un valor para arreglo[%d][%d]: ", fila, columna);
            scanf("%d", &arreglo[fila][columna]);
        }
    }

    for (fila = 0; fila <= 2; ++fila)
    {
        for (columna = 0; columna <= 2; ++columna)
        {
            printf("%d ", arreglo[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
```

## Pseudocódigo

```plaintext
Algoritmo arreglo_multi
    Definir arreglo, fila, columna Como Entero;
	Dimension arreglo(3,3);
	
	Para fila <- 0 Hasta 2 Con Paso 1 Hacer
        Para columna <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir "Escribe un valor para la fila ", fila, " y la columna ", columna;
            Leer arreglo(fila,columna);
        Fin Para
    Fin Para
	
	Para fila <- 0 Hasta 2 Con Paso 1 Hacer
        Para columna <- 0 Hasta 2 Con Paso 1 Hacer
            Escribir arreglo(fila,columna)," ", Sin Saltar;
        Fin Para
        Escribir "";
    Fin Para
FinAlgoritmo
```

## Ejemplo de ejecución en Bash

```bash
$ gcc matriz.c -o matriz
$ ./matriz
Escriba un valor para arreglo[0][0]: 1
Escriba un valor para arreglo[0][1]: 2
Escriba un valor para arreglo[0][2]: 3
Escriba un valor para arreglo[1][0]: 4
Escriba un valor para arreglo[1][1]: 5
Escriba un valor para arreglo[1][2]: 6
Escriba un valor para arreglo[2][0]: 7
Escriba un valor para arreglo[2][1]: 8
Escriba un valor para arreglo[2][2]: 9
1 2 3 
4 5 6 
7 8 9 
```

## Imágenes del Programa

![Captura de ejecución](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/04-cuarto-programa/cuarto.png)

![Diagrama de flujo](https://raw.githubusercontent.com/laskydev/programacion-estructurada-unida/refs/heads/main/04-cuarto-programa/cuarto-diagrama.png)

---
### Información Adicional
Este programa fue desarrollado para la clase de Programación Estructurada del Dr. Wong en la carrera de Ingeniería en Sistemas Computacionales.
