
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

