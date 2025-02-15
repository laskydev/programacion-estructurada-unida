/* Este codigo ha sido generado por el modulo psexport 20230904-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

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

