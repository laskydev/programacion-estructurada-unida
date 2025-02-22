# Cálculo de Depreciación de Activos en C

Este programa implementa un cálculo de depreciación utilizando el método de línea recta en C. Se solicita al usuario ingresar el costo inicial del activo, el valor de recuperación, la vida útil y el año actual para generar una tabla con la depreciación anual y el valor del activo año tras año.

## Código en C

```c
#include<stdio.h>

int main() {
	float acumulado;
	int ano;
	float coste;
	float depreciacion;
	float valor_actual;
	
	float valor_anual;
	float valor_recuperacion;
	int vida_util;
	printf("introduzca coste\n");
	scanf("%f", &coste);
	printf("introduzca depreciacion\n");
	scanf("%f", &valor_recuperacion);
	printf("introduzca vida util\n");
	scanf("%i", &vida_util);
	printf("Introduzca año actual\n");
	scanf("%i", &ano);
	valor_actual = coste;
	depreciacion = (coste-valor_recuperacion)/vida_util;
	acumulado = 0;
	printf("Año Depreciación Dep. Acumulada Valor Anual\n");
	while (ano<=vida_util) {
		acumulado = acumulado+depreciacion;
		valor_actual = valor_actual-depreciacion;
		printf("%i %f %f %f\n", ano, depreciacion, acumulado, valor_actual);
		ano = ano+1;
	}
	return 0;
}
```

## Pseudocódigo

```plaintext
algoritmo primero
	Definir Coste, Depreciacion, Valor_Recuperacion, Valor_Actual, Acumulado, Valor_Anual Como Real;
	Definir Año, Vida_Util Como Entero;
	escribir "introduzca coste";
	leer Coste;
	escribir "introduzca depreciacion";
	leer Valor_Recuperacion;
	escribir "introduzca vida util";
	leer Vida_Util;
	escribir "Introduzca año actual";
	leer Año;
	Valor_Actual <- Coste;
	Depreciacion <- (Coste-Valor_Recuperacion)/Vida_Util;
	Acumulado <- 0;
	escribir "Año Depreciación Dep. Acumulada Valor Anual";
	mientras Año <= Vida_Util Hacer
		Acumulado <- Acumulado+Depreciacion;
		Valor_Actual <- Valor_Actual-Depreciacion;
		escribir Año," ",Depreciacion," ",Acumulado," ",Valor_Actual;
		Año <- Año+1;
	fin mientras
FinAlgoritmo
```

## Ejemplo de ejecución en Bash

```bash
$ gcc depreciacion.c -o depreciacion
$ ./depreciacion
introduzca coste
10000
introduzca depreciacion
2000
introduzca vida util
5
Introduzca año actual
1
Año Depreciación Dep. Acumulada Valor Anual
1 1600.000000 1600.000000 8400.000000
2 1600.000000 3200.000000 6800.000000
3 1600.000000 4800.000000 5200.000000
4 1600.000000 6400.000000 3600.000000
5 1600.000000 8000.000000 2000.000000
```

## Imágenes del Programa

![Captura de ejecución](imagenes/ejecucion.png)

![Diagrama de flujo](imagenes/diagrama_flujo.png)

---
### Información Adicional
Este programa fue desarrollado para la clase de Programación Estructurada del Dr. Wong en la carrera de Ingeniería en Sistemas Computacionales.
