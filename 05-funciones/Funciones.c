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
    printf("Llamada a la funcion Triplicar(pasaje por referencia)\n");
    triplicar(&x);
    printf("El nuevo valor de x es: %i\n", x);
    return 0;
}
