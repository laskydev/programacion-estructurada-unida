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
