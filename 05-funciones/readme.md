# Funciones en C: Paso por Valor y Referencia

Este programa en C demuestra el uso de funciones con paso por valor y por referencia. Se incluyen tres funciones: una para mostrar un saludo, otra para calcular el doble de un número y otra para triplicar un número usando punteros.

## Código en C

```c
#include <stdio.h>

// Declaraciones adelantadas de las funciones
void saludar();
int calculardoble(int num);
void triplicar(int *num);

void saludar()
{
    printf("Hola Mundo!\n");
}

int calculardoble(int num)
{
    printf("Recibimos \n");
    int res;
    res = num * 2;
    return res;
}

void triplicar(int *num)
{
    (*num) = (*num) * 3;
}

int main()
{
    int x;
    printf("LLamada a la funcion Saludar\n");
    saludar();
    printf("Ingrese un valor numerico para x:\n");
    scanf("%i", &x);
    printf("Llamada a la funcion CalcularDoble (pasaje por valor)\n");
    printf("El doble de %i es %i\n", x, calculardoble(x));
    printf("El valor original de x es: %i\n", x);
    printf("Llamada a la funcion Triplicar (pasaje por referencia)\n");
    triplicar(&x);
    printf("El nuevo valor de x es: %i\n", x);
    return 0;
}
```

## Pseudocódigo

```plaintext
Inicio
  Definir x como entero
  Definir funciones saludar(), calculardoble(num) y triplicar(&num)
  
  Función saludar():
    Escribir "Hola Mundo!"
  Fin función
  
  Función calculardoble(num):
    Definir res como entero
    res <- num * 2
    Retornar res
  Fin función
  
  Función triplicar(&num):
    num <- num * 3
  Fin función
  
  Escribir "Llamada a la función Saludar"
  Llamar a saludar()
  Escribir "Ingrese un valor numérico para x:"
  Leer x
  Escribir "Llamada a la función CalcularDoble (pasaje por valor)"
  Escribir "El doble de x es", calculardoble(x)
  Escribir "El valor original de x es", x
  Escribir "Llamada a la función Triplicar (pasaje por referencia)"
  Llamar a triplicar(x)
  Escribir "El nuevo valor de x es", x
Fin
```

## Ejemplo de ejecución en Bash

```bash
$ gcc funciones.c -o funciones
$ ./funciones
LLamada a la funcion Saludar
Hola Mundo!
Ingrese un valor numerico para x:
5
Llamada a la funcion CalcularDoble (pasaje por valor)
El doble de 5 es 10
El valor original de x es: 5
Llamada a la funcion Triplicar (pasaje por referencia)
El nuevo valor de x es: 15
```

## Imágenes del Programa

![Captura de ejecución](imagenes/ejecucion_funciones.png)

![Diagrama de flujo](imagenes/diagrama_flujo_funciones.png)

---
### Información Adicional
Este programa fue desarrollado para la clase de Programación Estructurada del Dr. Wong en la carrera de Ingeniería en Sistemas Computacionales.
