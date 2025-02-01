/* Este codigo ha sido generado por el modulo psexport 20230904-mac de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

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

