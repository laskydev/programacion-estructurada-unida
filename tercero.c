/* Este codigo ha sido generado por el modulo psexport 20230904-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

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

