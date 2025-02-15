/* Este codigo ha sido generado por el modulo psexport 20230904-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include <stdio.h>

/* El algoritmo contiene funciones que reciben argumentos por referencia.
   Cuando estos argumentos no se corresponden con arreglos, al llamar a la
   función el argumento actual debe ser un puntero, lo cual se logra
   anteponiendo el operador & (a la variable que se pasa como argumento
   actual). En estos casos, la traducción automática falla, por lo que
   debe agregarlo manualmente donde sea necesario. */

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
    // printf(num * 2);

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
